#include <bits/stdc++.h>
char s[10005];
char yny[10005];
int main(){
gets(s);
int nub=0;
int aow;
char f[10],sr[10];
scanf("%s %s %s",f,sr,yny);
//scanf("%d",&aow);
//printf("%s %s",f,sr);
for(int a=0;s[a] != 0 ;a++){
    if(s[a]==f[0]){
        if(yny[nub]=='Y'){
        printf("%c",sr[0]);
        }else{
        printf("%c",s[a]);
        }
        nub++;
        //aow=100000000001;
    }else{
        printf("%c",s[a]);
    }
}
return 0; }
