#include <bits/stdc++.h>
using namespace std;
queue<int> q;
///x^y mod n
int main(){
int t;
scanf("%d",&t);
while(t--){
long long x,y,n;
scanf("%lld %lld %lld",&x,&y,&n);
while(y>0){
    q.push(y%2);
    y/=2;
}
long long ans=1;
long long now=x;
while(!q.empty()){
    if(q.front()){
        ans*=now;
        //printf("%lld ",now);
        ans%=n;
    }
    now*=now;
    now%=n;
    q.pop();
}
printf("%lld\n",ans);
}
return 0;}
