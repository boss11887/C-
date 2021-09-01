#include <bits/stdc++.h>
int want[15][15];
int ar[15][15];
int use[15];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=9;a++){
    for(int b=1;b<=9;b++){
        scanf("%d",&want[a][b]);
    }
}
int chk[15][15];
for(int e=1;e<=n;e++){
    bool jue=false;
    memset(chk,0,sizeof(chk));
    for(int a=1;a<=9;a++){
        memset(use,0,sizeof(use));
        for(int b=1;b<=9;b++){
            scanf("%d",&ar[a][b]);
            if(ar[a][b] < 0 || ar[a][b] > 9){
                jue=true;
            }
            if(want[a][b] != 0 && want[a][b] != ar[a][b]){
                jue=true;
            }
            if(use[ar[a][b]]==1){
                jue=true;
            }
            if(chk[b][ar[a][b]]==1){
                jue=true;
            }
            chk[b][ar[a][b]]=1;
            use[ar[a][b]]=1;
        }
    }
    if(jue==false){
        printf("%d\n",e);
    }
}
printf("END\n");
return 0;}
