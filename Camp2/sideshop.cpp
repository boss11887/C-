#include <cstdio>
#include <queue>
using namespace std;
queue<int> q;

int main(){

int n,x,range,sum=0,max=-1e6;
scanf("%d %d",&n,&range);
range=range*2+1;

for(int a=1;a<=n;a++){
    scanf("%d",&x);
    q.push(x);
    sum+=x;
    if(q.size()>range){
    sum-=q.front();
    q.pop();
    }
    if(sum>max){
        max=sum;
    }
}

printf("%d",max);
return 0;}
