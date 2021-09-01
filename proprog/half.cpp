#include <bits/stdc++.h>
using namespace std;
int dp[105][20010];
int n;
int ar[105];
int sum=0;
int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    sum+=ar[a];
}
dp[0][10000]=1;
for(int a=1;a<=n;a++){
    for(int b=a;b>=0;b--){
        for(int c=10000;c>=-10000;c--){
            if(dp[b][c+10000]==1){
                dp[b+1][c+ar[a]+10000]=1;
                //printf("%d %d \n",b+1,c+ar[a]+10000);
            }
        }
    }
}
int low=1e9;
for(int c=10000;c>=-10000;c--){
        if(dp[n/2][c+10000]==1){
            low=min(low,abs(sum-(c*2)));
        }
    }
printf("%d",low);
return 0;}
