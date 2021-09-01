#include <cstdio>
#include <queue>
using namespace std;
deque<int> q;
int main(){

int n,k;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    q.push_back(a);
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
    printf("%d ",q.front()%10);
    if(b!=n){
    q.push_back(q.front());
    q.pop_front();
    }
    }
    printf("\n");
}

return 0;}
