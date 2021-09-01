#include<bits/stdc++.h>
using namespace std;
long long dp[6][7500];
int coin[]={0,1,5,10,25,50};
int main(){
    int n;
    for(int a=1;a<=5;a++){
        dp[a][0]=1;
        //printf("a===============%d\n",a);
        for(int b=1;b<=7489;b++){
            if(b-coin[a]>=0)
            dp[a][b]=dp[a-1][b]+dp[a][b-coin[a]];
            else
            dp[a][b]=dp[a-1][b];
            //printf("%d\n",dp[a][b]);
            }
    }
    int chua;
    while(scanf("%d",&chua) != EOF){
        printf("%lld\n",dp[5][chua]);
    }

return 0;}
