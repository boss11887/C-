#include <bits/stdc++.h>
using namespace std;
char s[1505];
int pattern[1505];

int main(){
    //freopen("input.txt","w",stdout);
gets(s);
int n;
sscanf(s,"%d",&n);
int total=0;
for(int a=0;a<n;a++){
    scanf("%d",&pattern[a]);
    //printf("%d",pattern[a]);
}
gets(s);
gets(s);

for(int a=0;s[a] != '\0';a++){
    total++;
    //printf("%d ",a);
}
int rob=0;
int a=0;
while(1){
    if(a>=n && a%n==0){
        rob+=n;
    }
    if(pattern[(a%n)]+rob-1 < total){
    printf("%c",s[pattern[(a%n)]+rob-1]);
    }else{
    printf(" ");
    }
    //printf("%d ",pattern[(a%n)]+rob-1);
    //printf("%d ",a);
    a++;
    /*if(s[a]=='\0'){
        printf("==%d-- ",a);
    }*/
    if(s[a]=='\0' && a%n==0 && a>= total){
        break;
    }

}
return 0;}


/*
7
6 4 5 3 1 7 2
SILPAKORN UNIVERSITY NAKORN PRATHOM THAILAND 73000
*/
