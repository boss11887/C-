#include <bits/stdc++.h>

int main(){
    int total=0;
    int chua;
while(1){
    scanf("%d",&chua);
    if(chua<0){
        break;
    }
    chua+=total;
    int go=0;
    while(chua >=1000){
        go++;
        chua-=1000;
    }
    if(chua >=500){
        go++;
        chua=0;
        total=0;
    }
    printf("%d\n",go);
    total+=chua;
}


}
