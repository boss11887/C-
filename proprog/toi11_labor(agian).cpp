#include <bits/stdc++.h>
int ar[1000005];

int main(){
int n;
long long m;
long long high=1e15,low=0,mid;
scanf("%d %lld",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
long long ans;
while(low<=high){
    long long cal=0;
    mid=(low+high)/2;
    for(int a=1;a<=n;a++){
        cal+=mid/ar[a];
    }
    if(cal >= m){
        //ans=mid;
        high=mid-1;
    }else{
        low=mid+1;
    }
    //printf("%lld\n",mid);
}
printf("%lld",low);
return 0;}
