#include <bits/stdc++.h>
using namespace std;
int ar[10];
int main(){
scanf("%d %d %d",&ar[0],&ar[1],&ar[2]);
sort(ar,ar+3);
char s[100];
scanf("%s",s);
for(int a=0;a<=2;a++){
    int aow=s[a]-'A';
    printf("%d ",ar[aow]);
}
return 0;}
