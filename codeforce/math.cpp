#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    long long low=1e15;
    int ans;
    scanf("%lld %lld",&a,&b);
    int k;
    for(k=0;k<=4000000;k++){
        long long val=__gcd(a+k,b+k);
        long long cal=(a+k)*(b+k)/val;
        if(cal < low){
            low=cal;
            ans=k;
        }
    }
    printf("%d",ans);

return 0;}
