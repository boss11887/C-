#include <bits/stdc++.h>
using namespace std;
int ar[100005];

int main(){
    printf("%d",0||0);
int table,people;
scanf("%d %d",&table,&people);
for(int a=1;a<=table;a++){
    scanf("%d",&ar[a]);
}
long long low=1,high=1e15;
long long ans;


while(low<=high){
    long long mid=(low+high)/2;
    long long cal=0;
    for(int a=1;a<=table;a++){
        cal+=mid/ar[a];
    }
    if(cal >= people){
        ans=mid;
        high=mid-1;
    }else{
        low=mid+1;
    }
    //printf("%d\n",mid);
}
printf("%lld",ans);
return 0;}

