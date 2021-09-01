#include <bits/stdc++.h>
using namespace std;
int dp[20][1<<17];
int n;
int dis[20][20];
pair<int,int> ar[20];

int re(int now,int vv){
    //printf("==%d %d\n",now,vv);
    for(int a=0;a<=n;a++){
        if(a==now){
            continue;
        }
        int vg=vv|(1<<a);
        if(dp[a][vg] > dp[now][vv]+dis[now][a]){
            dp[a][vg]=dp[now][vv]+dis[now][a];
            re(a,vg);
        }
    }
}

int main(){
for(int a=0;a<=16;a++){
    for(int b=0;b<1<<17;b++){
        dp[a][b]=1e9;
    }
}
int st,ed;
scanf("%d %d",&st,&ed );
ar[0]={st,ed};
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar[a].first,&ar[a].second);
}
for(int a=0;a<=n;a++){
    for(int b=0;b<=n;b++){
        dis[a][b]=abs(ar[b].second - ar[a].second) + abs(ar[b].first - ar[a].first);
    }
}
dp[0][0]=0;
re(0,0);
printf("%d",dp[0][(1<<n+1)-1]);
return 0;}
