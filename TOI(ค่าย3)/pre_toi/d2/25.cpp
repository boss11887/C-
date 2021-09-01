#include <bits/stdc++.h>
using namespace std;
int ar[1505];

int main(){
int n,k;
int high=-1e9;
int low=1e9;
int sum=0;
scanf("%d %d",&n,&k);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    high=max(high,ar[a]);
    low=min(low,ar[a]);
}
int ans=1e9;
for(int b=0;b<=1000000;b++){
    int now=0;
    for(int a=1;a<=n;a++){
        now+=abs(ar[a]-b);
    }
    ans=min(ans,now);
}
printf("%d",ans);
return 0;}
