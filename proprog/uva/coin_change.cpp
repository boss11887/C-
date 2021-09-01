#include <bits/stdc++.h>
using namespace std;
int n=5;
int ar[]={0,1,5,10,25,50};
int dp[1000005];
int nub=0;
int low=1e9;

void re(int now){
    if(now == 0){
        nub++;
        return;
    }else if(now<0){
        return;
    }
    /*
    if(dp[now] != -1){
        return dp[now];
    }*/
    dp[now]=1e9;
    for(int a=1;a<=n;a++){
        re(now-ar[a]);
        //printf("%d--%d\n",now,dp[now]);
    }
    return;
}

int main(){
memset(dp,-1,sizeof(dp));
int val;
int tua;
scanf("%d",&tua);
for(int a=1;a<=tua;a++){
    scanf("%d",&val);
    nub=0;
    re(val);
    printf("%d\n",nub);
}
return 0;}
/*
4
1 3 5 7
25
*/

