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
int q;
scanf("%d",&q);
while(q--){
    memset(aow,0,sizeof(aow));
    int var,want;
    scanf("%d %d",&var,&want);
    bool jue=false;
    if(var==-1){
        int row=want;
        for(int a=1;a<=9;a++){
            if(ar[row][a]!=0){
                //printf("%d ",ar[row][a]);
                aow[ar[row][a]]++;
                jue=true;
            }
        }
    }else if(var==1){
        int col=want;
        for(int a=1;a<=9;a++){
            if(ar[a][col]!=0){
                aow[ar[a][col]]++;
                jue=true;
            }
        }
    }else{
        int str=1,edr=3,stc=1,edc=3;
        int now=0,plusc=0;
        int val=want;
        while(val > 3){
            now+=3;
            val-=3;
        }
        while(val > 1){
            plusc+=3;
            val--;
        }
        str+=now;
        edr+=now;
        stc+=plusc;
        edc+=plusc;
        //printf("%d %d--%d %d\n",str,stc,edr,edc);
        for(int i=str;i<=edr;i++){
            for(int j=stc;j<=edc;j++){
                if(ar[i][j]!=0){
                    aow[ar[i][j]]++;
                    jue=true;
                }
            }
        }
    }
    bool tum=false;
    for(int e=1;e<=9;e++){
        if(aow[e]>1){
            printf("%d ",e);
            tum=true;
        }
    }
    if(tum==false){
        printf("0");
    }
    printf("\n");
}

return 0;}
