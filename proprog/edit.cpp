#include <bits/stdc++.h>
using namespace std;
string ss,ff;
char s[85],f[85];
int dp[85][85];

int re(int q,int w){
    if(q==0){
        return w;
    }
    if(w==0){
        return q;
    }
    if(dp[q][w] != -1){
        return dp[q][w];
    }
    //printf("%d %d\n",w,q);
    if(f[q-1]==s[w-1]){
        return dp[q][w] = re(q-1,w-1);
    }
        return dp[q][w] = min(re(q-1,w)+1,min(re(q-1,w)+1,re(q-1,w-1)+1));
}

int main(){
    while(scanf("%s",f) != EOF){
        scanf("%s",s);
        ff=f;
        ss=s;
        memset(dp,-1,sizeof(dp));
        printf("%d\n",re(ff.size(),ss.size()));
    }

return 0;}
