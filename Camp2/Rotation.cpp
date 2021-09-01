#include <bits/stdc++.h>
int ar[200][200];
int main(){
int r,c;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
    }
}
for(int a=c;a>0;a--){
    for(int b=1;b<=r;b++){
        printf("%d ",ar[b][a]);
    }
    printf("\n");
}
return 0;}
