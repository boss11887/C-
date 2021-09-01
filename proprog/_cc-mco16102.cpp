#include <bits/stdc++.h>
int n;
int ar[100005];
long long dp[100005][2];
int main(){
scanf("%d",&n);
dp[1][1]=1;
dp[1][0]=1;
scanf("%d",&ar[1]);
for(int a=2;a<=n;a++){
    //int chua;
    scanf("%d",&ar[a]);
    if(ar[a] > ar[a-1]){
        dp[a][1]=dp[a-1][1]+dp[a-1][0];
    }else{
        dp[a][1]=dp[a-1][0];
    }
    dp[a][0]=dp[a-1][1]+dp[a-1][0];
    dp[a][0]%=1000000007;
    dp[a][1]%=1000000007;
}
printf("%lld",(dp[n][0]+dp[n][1])%1000000007);
}
