#include <bits/stdc++.h>
using namespace std;
int ar[10][10];
int aow[10];
int main(){
for(int a=1;a<=9;a++){
    for(int b=1;b<=9;b++){
        scanf("%d",&ar[a][b]);
    }
}

for(int a=1;a<=9;a++){
    for(int b=1;b<=9;b++){
        if(ar[a][b]==0){
            memset(aow,0,sizeof(aow));
            for(int i=1;i<=9;i++){
                aow[ar[a][i]]++;
                aow[ar[i][b]]++;
            }
            int str,edr,stc,edc;
            if(a<=3){
                str=1;
                edr=3;
            }else if(a<=6){
                str=4;
                edr=6;
            }else if(a<=9){
                str=7;
                edr=9;
            }
            if(b<=3){
                stc=1;
                edc=3;
            }else if(b<=6){
                stc=4;
                edc=6;
            }else if(b<=9){
                stc=7;
                edc=9;
            }
            //printf("%d %d--%d %d)))",str,stc,edr,edc);
            for(int i=str;i<=edr;i++){
                for(int j=stc;j<=edc;j++){
                    aow[ar[i][j]]++;
                }
            }
            printf("%d %d ",a,b);
            for(int i=1;i<=9;i++){
                if(aow[i]==0){
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
}

return 0;}

