#include <bits/stdc++.h>
using namespace std;
int ar[5];
int main(){
char s[10000];
ar[1]=1;
scanf("%s",s);
for(int a=0;s[a] != '\0';a++){
    if(s[a]=='A'){
        swap(ar[1],ar[2]);
    }else if(s[a]=='B'){
        swap(ar[3],ar[2]);
    }else if(s[a]=='C'){
        swap(ar[1],ar[3]);
    }
}
for(int a=1;a<=3;a++){
    if(ar[a]==1){
        printf("%d",a);
    }
}
return 0;}
