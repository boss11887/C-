#include <bits/stdc++.h>
using namespace std;
int dp[35][1005];
int w[1005],val[1005];

int knapsack(int now,int wa){
    if(wa < 0){
        return -1e9;
    }
    if(now==0){
        return 0;
    }
    if(dp[wa][now]!=-1){
        return dp[wa][now];
    }
    int lod=now-1;
    //printf("**%d %d--%d\n",wa,now,max(knapsack(lod,wa),knapsack(lod,wa-w[now])+val[now]));
    return dp[wa][now]=max(knapsack(now-1,wa),knapsack(now-1,wa-w[now])+val[now]);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof(dp));
        int total=0;
        int n;
        scanf("%d",&n);
        for(int a=1;a<=n;a++){
            scanf("%d %d",&val[a],&w[a]);
            //printf("%d %d\n",val[a],w[a]);
        }
        int q;
        scanf("%d",&q);
        for(int a=1;a<=q;a++){
            int chua;
            scanf("%d",&chua);
            total+=knapsack(n,chua);
        }
        printf("%d\n",total);
    }


return 0;}
