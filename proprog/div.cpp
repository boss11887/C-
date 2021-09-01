#include <bits/stdc++.h>
using namespace std;

int main(){
int now;
int ans=0;
for(int a=1;a<=10000;a++){
    now=a;
    bool jue=false;
    int nub=0;
    while(now >0){
        if(now%2==1){
            nub++;
        }else{
            nub=0;
        }
        if(nub==3){
            jue=true;
        }
        now/=2;
    }
    if(jue){
        ans++;
        //printf("%d\n",a);
    }
}
printf("%d",ans);
}
