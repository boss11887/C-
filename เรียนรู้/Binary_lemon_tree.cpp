#include <bits/stdc++.h>
int n;
int dp[10005];
int re(int now){
    //printf("%d\n",now);
    if(dp[now] !=-1)
        return dp[now];
    long long val=0;
    for(int a=0;a<now;a++){
        val+=(long long)re(a)%909091*(long long)re(now-a-1)%909091;
        val%=909091;
    }
    return dp[now]=val%909091;
}

int main(){
memset(dp,-1,sizeof(dp));
dp[1]=1;
dp[0]=1;
scanf("%d",&n);
printf("%d",re(n)%909091);


return 0;}
