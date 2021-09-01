#include <bits/stdc++.h>\

int main(){
int ar[]={0,1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084,548834,1741725,4210818,9800817,9926315};
int st,ed;
scanf("%d %d",&st,&ed);
for(int a=0;a<=24;a++){
    if(ar[a] >= st && ar[a] <=ed){
        printf("%d ",ar[a]);
    }
}

return 0;}
