#include <bits/stdc++.h>
using namespace std;
int ar[1000005];

int main(){
int n;
scanf("%d",&n);
int mm=0;
for(int a=1;a<=n;a++){
    int st,ed;
    scanf("%d %d",&st,&ed);
    ar[st]++;
    ar[ed]--;
    mm=max(ed,mm);
}
int high=0;
int now=0;
for(int a=1;a<=mm;a++){
    now+=ar[a];
    //printf("%d ",ar[a]);
    high=max(now,high);
}
printf("%d",high);
return 0;}
