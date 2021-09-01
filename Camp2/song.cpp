#include <bits/stdc++.h>

int main(){
int n;
int total=0;
scanf("%d",&n);
while(n >= 11){
    total+=n*30;
    n=0;
}
if(n >= 1){
    total+=50;
    n--;
}
while(n != 0){
    total+=40;
    n--;
}
printf("%d",total);
return 0;}
