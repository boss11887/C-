#include <bits/stdc++.h>
using namespace std;
int n;
int ar[1005];
int dp[1005][1005];

int re(int st,int ed){
    if(st>=ed){
        return 0;
    }
    if(dp[st][ed]!=-1){
        return dp[st][ed];
    }
    return dp[st][ed]=max(max(re(st+2,ed)+ar[st],re(st+1,ed-1)+ar[st]) ,
                          max(re(st,ed-2)+ar[ed],re(st+1,ed-1)+ar[ed]) );
}
int main(){
scanf("%d",&n);
for(int a=1;a<=n*2;a++){
    scanf("%d",&ar[a]);
}
memset(dp,-1,sizeof(dp));
printf("%d",re(1,n*2));
return 0;}
