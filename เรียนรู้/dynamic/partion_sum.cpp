#include <bits/stdc++.h>
int ar[1005];
int dp[1005][1005];
int n;

int re(int now,int sum){
    if(dp[now][sum]!= -1){
        return dp[now][sum];
    }
    if(sum==0){
        //printf("*");
        return true;
    }
    if(now==0 || sum <0){
        return false;
    }
    return dp[now][sum]=re(now-1,sum-ar[now]) || re(now-1,sum);
}

int main(){
    ///can memset only 0 and -1;
    memset(dp,-1,sizeof(dp));
    //printf("***%d\n",dp[100][106]);
scanf("%d",&n);
int sum=0;
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    sum+=ar[a];
}
//printf("%d===%d\n",n,sum/2);
if(sum&1){
    printf("No");
}else{
    if(re(n,sum/2)){
        printf("Yes");
    }else{
        printf("No");
    }
}

return 0;}
