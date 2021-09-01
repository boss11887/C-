#include <bits/stdc++.h>
using namespace std;
long long ar[300005];
long long qs[300005];

int main(){
int n,val;
long long minst=0,mined=0,low=0;
int ruam=0;
int m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%lld",&ar[a]);
    qs[a]=qs[a-1]+ar[a];
    if(qs[a]>0){
        qs[a]=0;
    }
    //qs[a]=min(qs[a],(long long)0);
    if(qs[a]<low){
        minst=a;
        mined=a;
    }
    //printf("%lld\n",qs[a]);
}
//printf("%d--",minst);
while(1){
    if(qs[mined+1]<0){
        mined++;
        //printf("**%d\n",mined);
    }else{
        break;
    }
}
while(1){
    if(qs[minst-1]<0){
        minst--;
        //printf("**%d\n",minst);
    }else{
        break;
    }
}
//printf("(%lld %lld)",minst,mined);
for(int a=minst;a<=mined;a++){
    if(m<0){
    ar[a]*=m;
    }
}

long long high=0;
for(int a=1;a<=n;a++){
    if(m>0){
        ar[a]*=m;
    }
    qs[a]=qs[a-1]+ar[a];
    if(qs[a]<0){
        qs[a]=0;
    }
    high=max(high,qs[a]);
    //qs[a]=min(qs[a],(long long)0);

    //printf("%lld\n",qs[a]);
}
printf("%lld",high);

return 0;}
