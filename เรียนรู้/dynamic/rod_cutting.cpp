#include <bits/stdc++.h>
using namespace std;

int val[1000005];
int dp[1000005];
int high=INT_MIN;
int re(int now){
    if(now==0){
        return 0;
    }
    if(dp[now] != 0){
        return dp[now];
    }
    int num;
    for(int a=1;a<=now;a++){
        num=val[a]+re(now-a);
        dp[now]=max(dp[now],num);
    }
    return dp[now];
}

int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%d",&val[a]);
    }
    int chua;
    scanf("%d",&chua);
    printf("Max_val = %d",re(chua));
    /*
    for(int a=1;a<=4;a++){
        printf("\n%d",dp[a]);
    }*/
return 0;}
/*
8
1 5 8 9 10 17 17 20
4
*/
