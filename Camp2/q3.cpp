#include <bits/stdc++.h>

int main(){
int n;
int sum=0;
int chua;
int total=0;
while(1){
    scanf("%d",&chua);
    if(sum+chua <= 1000){
        sum+=chua;
    }else{
    break;
    }
    n=chua;
    while(n >= 11){
    total+=n*30;
    n=0;
    }
    if(n >= 1){
        total+=50;
        n--;
    }
    while(n != 0){
        total+=40;
        n--;
    }
}
int dis;
scanf("%d",&dis);
printf("%d %d",dis*5+2000,total);
if(total > dis*5+2000){
    printf(" gain %d",total-(dis*5+2000));
}else{
    printf(" lose %d",(dis*5+2000)-total);
}
return 0;}

