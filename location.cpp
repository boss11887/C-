#include <bits/stdc++.h>
int ar[1005][1005];

int main(){
    int row,col;
    int high=0;
    scanf("%d %d",&row,&col);
    int k;
    scanf("%d",&k);
    for(int a=1;a<=row;a++){
        int sr=0;
        for(int b=1;b<=col;b++){
            int chua;
            scanf("%d",&chua);
            sr+=chua;
            ar[a][b]=sr+ar[a-1][b];
            if(a>= k && b>=k){
                int now=ar[a][b]-ar[a-k][b]-ar[a][b-k]+ar[a-k][b-k];
                if(now>high){
                    high=now;
                }
            }
        }
    }
    printf("%d",high);
}
