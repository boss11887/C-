#include <bits/stdc++.h>

int main(){
int n;
scanf("%d",&n);
int i=0,v=0,x=0,l=0,c=0;
for(int a=1;a<=n;a++){
    int now=a;
    int ni=0,nv=0,nx=0,nl=0,nc=0;
    while(now >= 100){
        nc++;
        now-=100;
    }
    while(now >= 50){
        nl++;
        now-=50;
    }
    while(now >= 10){
        nx++;
        now-=10;
        if(nx==4){
            nl++;
            nx=1;
        }
    }
    while(now >= 5){
        nv++;
        now-=5;
    }
    while(now >= 1){
        ni++;
        now-=1;
        if(ni==4){
            nv++;
            ni=1;
        }
    }
    if(nv==2){
        nv=0;
        nx++;
    }
    if(nl==2){
        nl=0;
        nc++;
    }
    i+=ni;
    v+=nv;
    x+=nx;
    l+=nl;
    c+=nc;
}
printf("%d %d %d %d %d",i,v,x,l,c);
return 0;}
