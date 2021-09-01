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
printf("%d ",sum);
printf("%d",total);

return 0;}
