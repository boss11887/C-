#include <bits/stdc++.h>
int ar[505][505];

int main(){
int n;
scanf("%d",&n);
int r=1,c=1;
int f=0;
int now=1;
int wtgr=3,wtgc=2;
int nub=n*n;
int pp=0;
while(1){
    if(nub==0){
        break;
    }else if(c==n && f%4==0){
        ar[r][c]=now%10;
        f++;
        r++;
    }else if(c==1+pp && f%4==1){
        ar[r][c]=now%10;
        f++;
        r++;
    }else if(r==n && f%4==2){
        ar[r][c]=now%10;
        f++;
        c++;
    }else if(r==wtgr && c==wtgc){
        ar[r][c]=now%10;
        f++;
        wtgr+=2;
        wtgc+=2;
        pp+=2;
        c++;
    }else if(f%4==0){
        ar[r][c]=now%10;
        c++;
    }else if(f%4==1){
        ar[r][c]=now%10;
        c--;
    }else if(f%4==2){
        ar[r][c]=now%10;
        r++;
    }else if(f%4==3){
        ar[r][c]=now%10;
        r--;
    }
    now++;
    nub--;
    //printf("%d %d %d\n",r,c,nub);
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}
return 0;}
