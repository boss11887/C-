#include <bits/stdc++.h>
using namespace std;
queue<int> q;

int main(){
int n;
scanf("%d",&n);
while(n--){
    int chua;
    scanf("%d",&chua);
    while(chua>0){
        q.push(chua%2);
        chua/=2;
    }
    long long ans=1;
    if(q.front()==1){
        ans++;
    }
    q.pop();
    long long now=2;
    while(!q.empty()){
        now*=now;
        now%=1000000007;
        if(q.front()==1){
            ans*=now;
            ans%=1000000007;
        }
        q.pop();
    }
    if(ans-1<0){
        printf("1000000006");
    }else{
    printf("%lld\n",ans-1);
    }
}


return 0;}
