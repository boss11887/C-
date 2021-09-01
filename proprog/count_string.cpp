#include <bits/stdc++.h>
using namespace std;
int dp[500][500][30];

int re(int now,int tua,int st){
    if(now < 0 || tua < 0){
        return 0;
    }
    if(dp[now][tua][st] != -1){
        return dp[now][tua][st];
    }
    if(now==0 && tua==0){
         //printf("%d %d\n",now,st);
        return 1;
    }
    int sum=0;
    //printf("st=%d\n",st);
    for(int a=st;a<=26;a++){
        //re(now-a,tua-1,st+1);
        sum+=re(now-a,tua-1,a+1);
        //printf("%d %d %d\n",now-a,tua-1,st+1);
    }
    //printf("===>%d %d\n",tua,sum);
    return dp[now][tua][st]=sum;
}


int main(){
int u,v;
int cnt=0;
while(1){
cnt++;
memset(dp,-1,sizeof(dp));
scanf("%d %d",&u,&v);
if(u==0){
    break;
}
if(v > 500){
    v=499;
}
if(u > 500){
    u=499;
}
printf("Case %d: %d\n",cnt,re(v,u,1));
}
return 0;}
