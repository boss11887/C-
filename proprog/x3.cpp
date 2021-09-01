#include <bits/stdc++.h>
int ar[1000005];
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    int one;
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    long long cnt=0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            if(a==b){
                continue;
            }
            cnt+=ar[a]^ar[b];
        }
    }
printf("%lld",cnt/2);
}
