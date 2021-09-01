#include <bits/stdc++.h>
using namespace std;
char s[1005];
char now[105];
int dp[1005][1005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%s",now);
    s[a]=now[0];
    //printf("%c ",s[a]);
}
for(int len=3;len<=n;len++){
    for(int st=1,ed=len;ed<=n;ed++,st++){
        if(s[st]==s[ed]){
            dp[st][ed]++;
        }
        int high=0;
        for(int mid=st+1;mid<ed;mid++){
            high=max(dp[st][mid]+dp[mid][ed],high);
            //printf("%d %d==%d\n",st,ed,dp[st][ed]);
        }
        dp[st][ed]+=high;
        printf("%d %d==%d\n",st,ed,dp[st][ed]);
    }
}
printf("%d",dp[1][n]);
return 0;}
/*
8
U B O U B O U B
*/
