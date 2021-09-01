#include <bits/stdc++.h>
int ar[2005][2005];
int main(){
int row,col;
scanf("%d %d",&row,&col);
int cnt=0;
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        int chua;
        scanf("%d",&ar[a][b]);
    }
}
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
    int wantr=a;
    int wantc=b;
    if(ar[wantr][wantc]==1){
        printf("* ");
    }else{
        int nub=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(ar[wantr+i][wantc+j]==1){
                    nub++;
                }
            }
        }
        printf("%d ",nub);
    }
}
printf("\n");
}
return 0;}

