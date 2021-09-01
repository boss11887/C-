#include <bits/stdc++.h>
int n,m,k;
int dp[1000005];
int re(int now){
    if(now==0){
        return 1;
    }
    if(dp[now] != 0){
        return dp[now];
    }
}

int main(){
int t;
gets(s);
scanf("%d",&t);
for(int a=1;a<=t;a++){
    scanf("%d %d %d",&n,&m,&k);
    m-=k*n;
    re(m);
}

return 0;}
