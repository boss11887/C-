#include <bits/stdc++.h>
using namespace std;
string ss,ff;
char s[85],f[85];
int dp[85][85];

int main(){
    while(scanf("%s",f) != EOF){
        scanf("%s",s);
        ff=f;
        ss=s;
        for(int a=0;a<=ff.size();a++){
            dp[a][0]=a;
        }
        for(int a=0;a<=ss.size();a++){
            dp[0][a]=a;
        }
    }

return 0;}

