#include <bits/stdc++.h>
using namespace std;
int n;
int ar[1000005];
int dp[1000005];

int re(int now){
    if(now <= 0){
        return 0;
    }
    if(dp[now] != -1){
        return dp[now];
    }
    dp[now]=1e9;
    for(int a=1;a<=n;a++){
        dp[now]=min(dp[now],re(now-ar[a])+1);
        //printf("%d--%d\n",now,dp[now]);
    }
    return dp[now];
}

int main(){
memset(dp,-1,sizeof(dp));
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
int val;
scanf("%d",&val);
printf("%d",re(val));
return 0;}
/*
4
1 3 5 7
25
*/
