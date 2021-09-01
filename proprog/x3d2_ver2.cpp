#include <bits/stdc++.h>
using namespace std;
queue<int> q;
stack<int> stk;
int ar[6234570];
int main(){
int n;
scanf("%d",&n);
q.push(1);
ar[1]=-1;
while(!q.empty()){
    int now=q.front();
    int t3=now*3;
    int d2=now/2;
    if(ar[t3]==0 && t3 <= 1234567){
        ar[t3]=now;
        q.push(t3);
    }
    if(ar[d2]==0 && d2 >0){
        ar[d2]=now;
        q.push(d2);
    }
    if(t3 == n || d2 == n){
        break;
    }
    q.pop();
}
//printf("-%d-",ar[2]);
while(n!=1){
    if(ar[n] > n){
        stk.push(2);
    }else{
        stk.push(3);
    }
    //printf("%d\n",n);
    n=ar[n];
}
printf("1");
while(!stk.empty()){
    if(stk.top()==3){
        printf("*3");
    }else{
        printf("/2");
    }
    stk.pop();
}
return 0;}
