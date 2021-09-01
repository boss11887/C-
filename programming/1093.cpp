#include <bits/stdc++.h>
using namespace std;
int ar[2005];
int dp[2005][2005];
int n;
int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
for(int len=2;len<=n-2;len+=3){
    for(int st=1,ed=st+len;ed<=n;st++,ed++){
        for(int mid=st+1;mid<ed;mid++){
            dp[st][ed]=max(dp[st][ed],dp[st][mid]+dp[mid+1][ed]+ar[st]+ar[mid]-ar[ed]);
        }
    }
}

for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        printf("%d ",dp[a][b]);
    }
    printf("\n");
}
printf("%d",dp[1][n]);
return 0;}
