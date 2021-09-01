#include <bits/stdc++.h>

int main(){
int n,m;
scanf("%d %d",&n,&m);
int cnt=0,now=0,chua;
for(int a=1;a<=n;a++){
    scanf("%d",&chua);
    now+=chua;
    if(now > m){
        now=chua;
        cnt++;
    }
}
if(now != 0){
    cnt++;
}
printf("%d",cnt);

return 0;}
