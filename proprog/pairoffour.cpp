#include <bits/stdc++.h>
using namespace std;
char s[1005];
int dp[1005][1005];
int n;


int main(){
memset(dp,0,sizeof(dp));
scanf("%d",&n);
char mychar[1005];
for(int a=1;a<=n;a++){
    scanf("%s",mychar);
    s[a]=mychar[0];
    //printf("%c",s[a]);
}
for(int len=2;len<=n;len++){
    for(int st=1,ed=len;ed<=n;ed++,st++){
        if(s[st]==s[ed]){
            dp[st][ed]=dp[st+1][ed-1]+1;
        }else{
            for(int mid=st+1;mid<ed;mid++){
                //printf("%d %d %d\n",st,ed,mid);
                dp[st][ed]=max(dp[st][ed],dp[st][mid]+dp[mid+1][ed]);
            }
        }
    }
}
printf("%d",dp[1][n]);
return 0;}
