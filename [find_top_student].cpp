#include <bits/stdc++.h>
int ar[1005][10];
int maxc[10];

int main(){
int r,c;
int sumr=0;
int pos=0;
int high=0;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    sumr=0;
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
        sumr+=ar[a][b];
        if(sumr > high){
            high=sumr;
            pos=a;
        }
        if(ar[a][b] > maxc[b]){
            maxc[b]=ar[a][b];
        }
    }
}
printf("%d\n",high);
int nub=0;
for(int b=1;b<=c;b++){
    if(ar[pos][b] >= maxc[b]){
        nub++;
    }
}
printf("%d",nub);
return 0;}
