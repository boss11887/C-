#include <bits/stdc++.h>
using namespace std;
string ff,ss;
char s1[10005],s2[10005];
int fyao,syao;
int dp[1005][1005];

int re(int f,int s){
    if(f==0 || s==0){
        return 0;
    }
    if(dp[f][s] != 0){
        return dp[f][s];
    }
    int val;
    if(s1[f-1]==s2[s-1]){
        val=1;
    }else{
        val=0;
    }
    return dp[f][s]=max(max(re(f-1,s),re(f,s-1)),re(f-1,s-1)+val);
}
int main(){
    scanf("%s %s",&s1,&s2);
    ff=s1;
    ss=s2;
    int fyao=ff.size();
    int syao=ss.size();
    printf("LCS = %d",re(fyao,syao));
return 0;}
/*
ABCBDAB
BDCABA
*/
