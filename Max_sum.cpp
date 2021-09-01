#include <bits/stdc++.h>

int main(){
int n;
int high=-1e8;
int now=0;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    now+=chua;
    if(now<0){
        now=0;
    }
    if(now > high){
        high=now;
    }
}
printf("%d",high);
return 0;}
