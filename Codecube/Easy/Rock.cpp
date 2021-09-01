#include <bits/stdc++.h>
int ar[105];

int main(){
    bool jue=false;
    int total=0,pos=0,high=-1;
for(int a=1;a<=3;a++){
    int c;
    scanf("%d",&c);
    if(c > high && c >= 34){
        high=c;
        pos=a;
    }
    total+=c;
    if(ar[c]==1 && c==high){
        jue=true;
    }
    ar[c]=1;
}

if(total != 100){
    printf("BUG");
}else if(jue ==true){
    printf("I DON'T KNOW");
}else{
    switch(pos){
    case(1):
        printf("PAPER");
        break;
    case(2):
        printf("SCISSORS");
        break;
    case(3):
        printf("ROCK");
        break;
    }
}

return 0;}
