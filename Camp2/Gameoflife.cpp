#include <bits/stdc++.h>
int ar[1005][1005];

int main(){
int r,c;
int cnt=0;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
        if(ar[a][b]==1){
            cnt++;
        }
    }
}
printf("%d\n",cnt);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        if(ar[a][b]==1){
            printf("%d %d\n",a,b);
        }
    }
}


return 0;}
