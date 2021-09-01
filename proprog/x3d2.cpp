#include <bits/stdc++.h>
int ar[5000000];
using namespace std;
queue<int> q;
stack<int> stk;

int main(){
ar[1]=-5;

int n;
scanf("%d",&n);
q.push(1);
bool jue=false;

while(!q.empty()){
    int now=q.front();
    if(ar[now*3]==0 && now*3<5000000){
        ar[now*3]=now;
        q.push(now*3);
    }
    if(ar[now/2]==0 && now/2>0 ){
        ar[now/2]=now;
        q.push(now/2);
    }
    if(now==n){
            //printf("me");
        while(1){
            int tua = ar[n];
            //printf("%d\n",tua);
            if(tua == -5){
                jue=true;
                break;
            }
            if(tua>n){
                stk.push(2);
            }else if(tua < n){
                stk.push(3);
            }
            n=tua;
        }
    }
    if(jue==true){
        break;
    }
    //3printf("%d\n",now);
        q.pop();
}
printf("1");
while(!stk.empty()){
    if(stk.top()==2){
        printf("/2");
    }else{
        printf("*3");
    }
    stk.pop();
}
return 0;}
