#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
char s1[1005],s2[1005];
string ms1,ms2;
int dis(string f,int flong,string s,int slong){
    if(flong == 0){
        return slong;
    }
    if(slong == 0){
        return flong;
    }
    if(dp[flong][slong]!=-1){
        return dp[flong][slong];
    }
    int now;
    if(f[flong-1]==s[slong-1]){
        now=0;
    }else{
        now=1;
    }
    return dp[flong][slong]=min(min(dis(f,flong-1,s,slong)+1,dis(f,flong,s,slong-1)+1),dis(f,flong-1,s,slong-1)+now);
}

int main(){
    memset(dp,-1,sizeof(dp));
    scanf("%s %s",s1,s2);
    ms1=s1;
    ms2=s2;
    printf("At least need to change is : %d",dis(ms1,ms1.size(),ms2,ms2.size()));

return 0;}
