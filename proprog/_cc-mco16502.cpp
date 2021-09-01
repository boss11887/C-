#include <bits/stdc++.h>
using namespace std;
long long qs[10000];
long long dp[10005][10005];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%lld",&qs[a]);
    qs[a]+=qs[a-1];
}
printf("%lld",qs[n]);
for(int a=1;a<n;a++){
    for(int b=a+1;b<=n;b++){

    }
}
return 0;}
