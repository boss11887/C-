#include <cstdio>
#include <queue>
using namespace std;
deque<int> q;
deque<int> req;
bool re=true;
int main(){

int n,k;
scanf("%d %d",&n,&k);
for(int a=1;a<=n;a++){
    q.push_back(a);
}
for(int a=n;a>=1;a--){
    req.push_back(a);
}
req.push_front(req.back());
req.pop_back();
for(int a=1;a<=n;a++){

    if((a-1)%k==0){
        if(re==true)
            re=false;
        else
            re=true;
    }

    for(int b=1;b<=n;b++){
    if(re==false){
        printf("%d ",q.front()%10);
    }else if(re==true){
        printf("%d ",req.front()%10);
    }
    if(b!=n){
    q.push_back(q.front());
    q.pop_front();
    req.push_back(req.front());
    req.pop_front();
    }
    }
    printf("\n");
}

return 0;}
