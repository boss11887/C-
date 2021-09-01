#include <bits/stdc++.h>
using namespace std;
int ar[105];
int dp[105][105];

int re(int st,int ed){
    if(st+1==ed){
        return 0;
    }
    if(dp[st][ed] != -1){
        return dp[st][ed];
    }
    int low=1e8;
    for(int a=st+1;a<ed;a++){
        low=min(re(st,a)+re(a,ed)+ar[ed]-ar[st],low);
    }
    return dp[st][ed]=low;
}

int main(){
while(1){
    int yao,n;
    scanf("%d",&yao);
    if(yao==0){
        break;
    }
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    ar[0]=0;
    ar[n+1]=yao;
    printf("The minimum cutting is %d.\n",re(0,n+1));
}

return 0;}
