#include <bits/stdc++.h>
char s[1005];

int abs(int a){
if(a >= 0)
return a;
return -a;
}
int main(){
gets(s);
int n;
scanf("%d",&n);
//printf("%d",n);
int u=0,d=0,l=0,r=0;
for(int a=0;s[a] != '\0'; a++){
    if(s[a]=='N'){
        u++;
    }
    if(s[a]=='S'){
        d++;
    }
    if(s[a]=='E'){
        r++;
    }
    if(s[a]=='W'){
        l++;
    }
}
if(d > u){
    int c=d;
    d=u;
    u=c;
}

if(r > l){
    int c=r;
    r=l;
    l=c;
}
int total=u+l;
int lob=r+d;
while(n>0){
    if(lob > 0){
    lob--;
    }else{
    total--;
    }
    n--;
}
printf("%d",(total-lob)*2);
return 0;}
