#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,yao;
scanf("%d %d %d",&n,&m,&yao);
int cnt=0;
int now=0;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    if(a==1){
        now=chua;
        cnt++;
    }
    if(chua-now>yao){
        cnt++;
        now=chua;
    }
}
printf("%d",cnt);

return 0;}
