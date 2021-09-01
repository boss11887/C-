#include <bits/stdc++.h>
int ar[1005][1005];
int main(){
int r,c;
scanf("%d %d",&r,&c);
int want;
int high=-1e8;
scanf("%d",&want);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        int chua;
        scanf("%d",&chua);
        ar[a][b]=chua+ar[a][b-1]+ar[a-1][b]-ar[a-1][b-1];
    }
}
for(int a=want;a<=r;a++){
    for(int b=want;b<=c;b++){
        int cal=ar[a][b]-ar[a][b-want]-ar[a-want][b]+ar[a-want][b-want];
        if(cal>high){
            high=cal;
        }
    }
}

printf("%d",high);
return 0;}
