#include <bits/stdc++.h>
using namespace std;
int dp[150][150];
int n,m,k;
int yao;
int re(int now,int layer){
    if (dp[now][layer]!=0){
        return dp[now][layer];
    }
    if(layer==1){
        return dp[now][layer]=1;
    }
    long long sum=0;
    for(int i=0;i<=now;i++){
        //printf("==%d\n",re(i,layer-1));
        sum+=re(i,layer-1);
    }
    return dp[now][layer]=sum;
}

int main(){
int test;
scanf("%d",&test);
while(test--){
    scanf("%d %d %d",&n,&m,&k);
    yao=m-(n*k);
    printf("%d..t",re(yao,n));
}
return 0;}
