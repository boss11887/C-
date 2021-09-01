#include <bits/stdc++.h>
char ar[200005][4];
char ff[200005][4];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        scanf("%s",&ar[a]);
        //printf("--%c--",ar[a][0]);
    }
    for(int a=1;a<=m;a++){
        scanf("%s",&ff[a]);
    }
    int cnt=0;
    bool jue=false;
    int pos=1,tua=0;
    int st,stb;
    for(int a=1;a<=n;a++){
        for(int b=0;ar[a][b]>='0';b++){
            if(jue==false){
                jue=true;
                st=a;
                stb=b;
            }
            printf("cmp(%d,%d)=%c %c\n",a,b,ar[a][b],ff[pos][tua]);
            if(ar[a][b]==ff[pos][tua]){
                tua++;
                if(ff[pos][tua]=='\0'){
                    pos++;
                    tua=0;
                }
                if(pos>m){
                    pos=1;
                    tua=0;
                    cnt++;
                    printf("jue");
                    a=st;
                    b=stb+1;
                    jue=false;
                }
            }
        }
    }
    printf("ans=%d",cnt);
}
