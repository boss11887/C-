#include <bits/stdc++.h>
using namespace std;
int dp[100005];
int n;
int ar[105];
int sum=0;


int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    sum+=ar[a];
}
dp[0]=1;
for(int a=1;a<=n;a++){
    for(int b=sum;b>=1;b--){
        if(b>=ar[a]){
            dp[b]=max(dp[b],dp[b-ar[a]]);
        }
    }
}
for(int a=sum/2;a>=0;a--){
    if(dp[a]==1){
        printf("%d",sum-a*2);
        return 0;
    }
}
//printf("%d",re(n,0,0));
return 0;}
