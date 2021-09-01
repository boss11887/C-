#include <bits/stdc++.h>
using namespace std;
int ar[1000005];

int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&ar[i]);
}
ar[n+1]=0;
long long ans=0;
int low=ar[1];
int now=ar[1];
for(int i=1;i<=n+1;i++){
    if(ar[i] <= now && now-low >= 0){
        ans+=(now-low);
        low=ar[i];
        now=ar[i];
        //printf("*");
    }else if(ar[i] >= now){
        now=ar[i];
    }
    //printf("%d %d\n",now,low);
}
printf("%lld",ans);
return 0;}
/*
6
10 20 15 12 21 30
*/
