#include <bits/stdc++.h>
using namespace std;
long long dp[10005];
int ar[25];

int main(){
    int chua;
    bool change=false;
    for(int a=1;a<=21;a++){
        int now=a*a*a;
        ar[a]=now;
    }
    dp[0]=1;
    for(int b=2;b<=21;b++){
        for(int a=0;a<=10000;a++){
            if(dp[a]>=1){
                if(a+ar[b]<=10000){
                    dp[a+ar[b]]+=dp[a];
                }else{
                    break;
                }
            }
        }
    }
    long long now=1;
    for(int a=1;a<=10000;a++){
        now+=dp[a];
        dp[a]=now;
        printf("%d==%lld\n",a,now);
    }
    while(scanf("%d",&chua) != EOF){
        printf("%lld\n",dp[chua]);
    }
return 0;}
