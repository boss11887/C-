#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int val[1005];
int w[1005];
int n;
int cnt=0;

int re(int now,int nak){
    if(nak<0){
        return -1e9;
    }

    if(dp[now][nak] != 0){
        return dp[now][nak];
    }
    if(now==n+1){
        return 0;
    }
    cnt++;
    //printf("%d\n",cnt);
    //printf("%d %d\n",now,nak);
    return dp[now][nak]=max(re(now+1,nak),re(now+1,nak-w[now])+val[now]);
}
int main(){
    int weight;
    scanf("%d %d",&n,&weight);
    for(int  a=1;a<=n;a++){
        scanf("%d",&val[a]);
    }
    for(int a=1;a<=n;a++){
        scanf("%d",&w[a]);
    }
    printf("Maximum val = %d",re(1,weight));

return 0;}
/*
6 25
20 5 10 40 15 25
1 2 3 8 7 4
*/
