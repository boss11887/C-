#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
scanf("%d",&n);
long long ans=0;
scanf("%lld",&ans);
for(int a=1;a<n;a++){
    long long chua;
    scanf("%lld",&chua);
    long long now=__gcd(ans,chua);
    ans=ans*chua/now;
}
printf("%lld",ans);
return 0;}
