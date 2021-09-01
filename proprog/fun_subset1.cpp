#include <bits/stdc++.h>
using namespace std;
int ar[1005];
int dp[10005];

int main(){
int qq;
scanf("%d",&qq);
while(qq--){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int a=1;a<=n;a++){
        for(int b=0;b<=10000;b++){
            if(dp[b]==1){
                //dp[b]=1;
                dp[b^ar[a]]=1;
                //printf("%d==%d\n",a,b);
            }
        }
    }
int ans=0;
for(int b=0;b<=10000;b++){
    if(dp[b]==1){
        ans=max(ans,b^m);
        //dp[b][a]=1;
        //dp[b^ar[a]][a]=1;
        //printf("%d==%d\n",a,b);
        }
    }

printf("%d\n",ans);
}
return 0;}
