#include <bits/stdc++.h>
using namespace std;
int ar[1005][1005];

int main(){
int r,c;
int cnt=0;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
    }
}
int q;
scanf("%d",&q);
while(q--){
    int sr,sc,nr,nc;
    scanf("%d %d %d %d",&sr,&sc,&nr,&nc);
    int str=nr-sr/2;
    int edr=nr+sr/2;
    int stc=nc-sc/2;
    int edc=nc+sc/2;
    int nub=0;
    for(int a=str;a<=edr;a++){
        for(int b=stc;b<=edc;b++){
            if(ar[a][b]==1){
                nub++;
            }
        }
    }
    printf("%d\n",nub);
}
return 0;}
