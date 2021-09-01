#include <bits/stdc++.h>
using namespace std;
int dp[10005];
int tum[10005];
int ar[105];
int main(){
    memset(dp,-1,sizeof(dp));
    for(int a=1;a<=100;a++){
        ar[a]=a*a;
        dp[a*a]=1;
    }
    int cnt=100;
    while(cnt<10000){
        for(int a=1;a<=10000;a++){
            if(dp[a]>=1 && tum[a]==0){
                tum[a]=1;
                for(int b=1;b<=100;b++){
                    int go=a+ar[b];
                    if(go<=10000){
                        if(dp[go]==-1){
                            cnt++;
                            dp[go]=dp[a]+1;
                        }else{
                            dp[go]=min(dp[go],dp[a]+1);
                        }
                    }
                }
            }
        }
    }
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        printf("%d\n",dp[chua]);
    }
return 0;}
