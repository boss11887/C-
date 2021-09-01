#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
class speed{
public:
    int time;
    int num;
    int delay;
    speed(int time,int delay,int num){
    this->time=time;
    this->delay=delay;
    this->num=num;
    }
};

struct op{
bool operator()(const speed&s1,const speed&s2){
if(s1.time != s2.time)
    return s1.time>s2.time;
else
    return s1.delay < s2.delay;
}

};

priority_queue<speed,vector<speed>,op> pq;
int main(){

int n;
scanf("%d",&n);
while(n--){
    int kon,dis;
    scanf("%d %d",&kon,&dis);
    for(int a=1;a<=kon;a++){
        float fast;
        int delay,time;
        scanf("%d %d",&time,&delay);
        fast=dis/time;
        fast+=delay/1000;
        pq.push(speed(fast,delay,a));
    }
    while(!pq.empty()){
        printf("%d\n",pq.top().num);
        pq.pop();
    }
}



return 0;}
