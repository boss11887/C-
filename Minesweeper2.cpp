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
int q;
scanf("%d",&q);
while(q--){
    int wantr,wantc;
    scanf("%d %d",&wantr,&wantc);
    if(ar[wantr][wantc]==1){
        printf("YES\n");
    }else{
        int nub=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(ar[wantr+i][wantc+j]==1){
                    nub++;
                }
            }
        }
        printf("NO %d\n",nub);
    }
}

return 0;}
