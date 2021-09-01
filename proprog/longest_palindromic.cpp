#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
char c[1005];
string ms;
int re(int st,int ed){
    if(st==ed){
        return 1;
    }else if(st+1==ed &&c[st] == c[ed]){
        return 2;
    }
    if(dp[st][ed] != 0){
        return dp[st][ed];
    }
    if(c[st]==c[ed])
        return dp[st][ed]=re(st+1,ed-1)+2;
    return dp[st][ed]=max(re(st+1,ed),re(st,ed-1));
}
int main(){
gets(c);
int n;
sscanf(c,"%d",&n);
while(n--){
    memset(dp,0,sizeof(dp));
    gets(c);
    int now=0;
    for(int a=0;c[a] !='\0';a++){
        if(c[a]==' '){
            continue;
        }
        c[now]=c[a];
        now++;
    }
    c[now]=NULL;
    ms=c;
    int yao=ms.size();
    printf("%d\n",re(0,yao-1));
}

return 0;}
