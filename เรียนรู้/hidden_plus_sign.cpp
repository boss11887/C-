#include <bits/stdc++.h>
int ar[35][35];
int myar[35][35];
int main(){
int q;
scanf("%d",&q);
while(q--){
    int row,col;
    scanf("%d %d",&row,&col);
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            scanf("%d",&ar[a][b]);
            myar[a][b]=ar[a][b];
        }
    }
    int cnt=0;
    int rr,cc;
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            for(int e=1;e<=11;e++){
            if(myar[a][b]==1 && ar[a-e][b] >= 1 && ar[a+e][b] >=1 && ar[a][b-e] >=1 && ar[a][b+e] >=1){
                if(e==1){
                ar[a][b]--;
                cnt++;
                }
                ar[a-e][b]--;
                ar[a+e][b]--;
                ar[a][b-e]--;
                ar[a][b+e]--;
                rr=a;
                cc=b;
                //printf("%d %d \n",a,b);
                }else{
                break;
                }
            }
        }
    }
    printf("%d\n%d %d\n",cnt,rr,cc);
}

return 0;}
