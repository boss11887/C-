#include <cstdio>
int ar[500001];
int main(){

int n,a,b,range,sum=0,totallow=0,low=1e6,st,last=0;
scanf("%d %d",&n,&range);

for(a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
a=1;
totallow=ar[a];
while(a<n){
        low=1e6;
    for(b=a;b<=range+a;b++){
        if(ar[b]<=low&&b!=a){
            low=ar[b];
            st=b;
        }
    }
    a=st;
    totallow+=low;
    //printf("(%d-%d)",low,st);
    if(st+range>=n){
        totallow+=ar[n];
        break;
    }
}

printf("%d",totallow);
return 0;}
