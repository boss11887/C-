#include <bits/stdc++.h>
using namespace std;
int ar[1000005];
int main(){
int m;
long long val;
scanf("%d %lld",&m,&val);
for(int a=1;a<=m;a++){
    scanf("%d",&ar[a]);
}
long long high=1e15,low=0,mid,ans;
while(low<=high){
    mid=(high+low)/2;
    long long sum=0;
    for(int a=1;a<=m;a++){
        sum+=mid/ar[a];
    }
    if(sum>=val){
        ans=mid;
        high=mid-1;
    }else{
        low=mid+1;
    }
}
printf("%lld",ans);
return 0;}
