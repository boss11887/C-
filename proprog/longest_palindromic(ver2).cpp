#include <bits/stdc++.h>
using namespace std;
char s[1005];
int dp[1005][1005];
string mc;

int par(int st,int ed){
    if(dp[st][ed] != -1){
        return dp[st][ed];
    }
    if(st == ed){
        return 1;
    }else if(st>ed){
        return 0;
    }
    if(s[st]==s[ed]){
        return dp[st][ed]=par(st+1,ed-1)+2;
    }else{
        return dp[st][ed]=max(par(st+1,ed),par(st,ed-1));
    }
}
int main(){
int n;
gets(s);
sscanf(s,"%d",&n);
while(n--){
    memset(dp,-1,sizeof(dp));
    gets(s);
    mc=s;
    int yao=mc.size();
    printf("%d\n",par(0,yao-1));
}
return 0;}
