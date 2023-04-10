#include <bits/stdc++.h>
using namespace std;
int n,total;
int dp[105][100005];
int val[105];
int w[105];

int ks(int cur,int weight){
    //printf("%d ",dp[cur][weight]);
    if(dp[cur][weight] != -1)
        return dp[cur][weight];
    if(weight < 0)
        return 1e9;
    if(cur == 0)
        return 0;
    dp[cur][weight]=max( ks(cur-1,weight) , ks(cur-1, weight-w[cur] ) + val[cur] );
    printf("%d %d == %d\n",cur,weight,dp[cur][weight]);
    return dp[cur][weight]=max( ks(cur-1,weight) , ks(cur-1, weight-w[cur] ) + val[cur] );   
}


int main(){
    scanf("%d %d",&n,&total);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&w[i],&val[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=total;j++){
            dp[i][j]=-1;
        }
    }
    ks(n,total);
}