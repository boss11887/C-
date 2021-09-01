#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int cnt=0;
int dp[70][70][2];
int re(int chan,int l,int af){
    if(chan <= 0){
        if(l==m){
            return 1;
        }else{
            return 0;
        }
    }
    if(dp[chan][l][af] != -1){
        return dp[chan][l][af];
    }
    if(af==1){
        return dp[chan][l][af]=re(chan-1,l,0)+re(chan-1,l,1);
    }else{
        return dp[chan][l][af]=re(chan-1,l+1,0)+re(chan-1,l,1);
    }
}

main(){
while(1){
    memset(dp,-1,sizeof(dp));
    scanf("%lld %lld",&n,&m);
    if(n<0 && m<0){
        break;
    }
    printf("%lld\n",re(n,0,0));
}

return 0;}
