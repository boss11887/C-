#include<bits/stdc++.h>
using namespace std;
long long dp[7][7500];
int a[6];
int main(){
a[1]=1;
a[2]=5;
a[3]=10;
a[4]=25;
a[5]=50;
int n;
while(scanf("%d",&n)!=-1){
if(n==0){
    printf("1\n");
    continue;
}

for(int i=1;i<=5;i++){
    for(int j=1;j<=n;j++){
        dp[i][j]=0;
    }
}
for(int j=1;j<=n;j++){
    dp[1][j]=1;
}
for(int i=2;i<=5;i++){
    for(int j=1;j<=n;j++){
        if(j<a[i])
            dp[i][j]=dp[i-1][j];
        else
            dp[i][j]=dp[i-1][j]+dp[i][j-a[i]];
    }
}
printf("==%lld\n",dp[5][n]);
}




}