#include <bits/stdc++.h>

int main(){
int n;
scanf("%d",&n);
long long ans=3;
for(int a=2;a <=n;a++){
    ans*=2;
    ans%=(1000000007);
}
printf("%lld",ans);
}
