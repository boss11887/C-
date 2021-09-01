#include <cstdio>
char s[30005][1005];

int main(){
int yao,kum;
scanf("%d %d",&yao,&kum);
gets(s[0]);
for(int a=1;a<=kum;++a){
    gets(s[a]);
}
int b;
int nub;
for(int a=1;a<=kum;++a){
    nub=0;
    for(b=0;b<yao;++b){
        if(s[a][b] != s[a+1][b]){
            nub++;
            if(nub>2){
            printf("%s",s[a]);
            return 0;
        }
        }
    }
}


return 0;}
