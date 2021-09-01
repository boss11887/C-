#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int main(){
int n;
int cnt=1;
scanf("%d",&n);
int now=0;
now=n&1;
int high=n;
int tt=0;
while(high>0){
tt++;
high/=2;
}
tt--;
while(1){
for(int a=tt;a>=0;a--){
    int aow=n&(1<<a);
    if(aow==0){
        aow=1;
    }
    printf("%d(%d) ",aow,a);
    if(aow != now){
        stk.push(a);
    }
    now=aow;
}
}
printf("%d\n",stk.size()*2);
while(!stk.empty()){
    printf("%d ",stk.top());
    stk.pop();
}
return 0;}
