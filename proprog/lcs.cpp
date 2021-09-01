#include <bits/stdc++.h>
using namespace std;
char f[1005],s[1005];
int dp[1005][1005];

int yao1,yao2;
string ff,ss;

int re(int st,int ed){
    //printf("(%d %d)",st,ed);
    if(st==-1|| ed==-1){
        return 0;
    }
    if(dp[st][ed] != -1){
        return dp[st][ed];
    }
    if(f[st]==s[ed]){
        return dp[st][ed]=re(st-1,ed-1)+1;
    }else{
        return dp[st][ed]=max(re(st-1,ed),re(st,ed-1));
    }
}
int main(){
while(gets(f)){
    memset(dp,-1,sizeof(dp));
    gets(s);
    //printf("%s",f);
    ff=f;
    ss=s;
    yao1=ff.size();
    yao2=ss.size();
    printf("%d\n",re(yao1-1,yao2-1));
}

return 0;}
