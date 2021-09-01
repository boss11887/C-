#include <bits/stdc++.h>
using namespace std;
char n[1000],m[1000];
int dp[1005][1005];

int re(int f,int s){
if(f==0 || s==0)
    return 0;

if(dp[f-1][s-1] == -1){
    if(n[f-1] != m[s-1]){
        dp[f-1][s-1] = max(re(f-1,s),re(f,s-1));
        return dp[f-1][s-1];
    }else{
        dp[f-1][s-1] = re(f-1,s-1) + 1;
        return dp[f-1][s-1];
    }
}else{
    return dp[f-1][s-1];
}

}

int main(){
scanf("%s %s",&n,&m);
int nsize=0,msize=0;
for(int a=0;n[a] != '\0';a++){
    nsize++;
}
for(int a=0;m[a] != '\0';a++){
    msize++;
}

for(int a=0;a<nsize;a++){
    for(int b=0;b<msize;b++){
        dp[a][b]=-1;
    }
}

printf("%d",re(nsize,msize));
return 0;}

/*
ABCBDAB
BDCABA
*/
