#include <bits/stdc++.h>
using namespace std;

int main(){
int num=0;
num=num|(1<<1);
num=num|(1<<0);
printf("%d ",num);
int ans=num&(1<<2);
printf("%d",ans);


return 0;}
