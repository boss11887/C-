#include <bits/stdc++.h>
using namespace std;

class myclass{
public:
    int num;
    int day;
    myclass(int num,int day){
       this->num=num;
       this->day=day;
    }
};
struct compare{
    bool operator()(const myclass&n1,const myclass&n2){
        if(n1.day != n2.day)
            return n1.day > n2.day;
        return n1.num > n2.num;
    }
};

priority_queue<myclass,vector<myclass>,compare> pq;
int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    pq.push(myclass(a,0));
}
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    int now=pq.top().day;
    int leak=pq.top().num;
    printf("%d\n",leak);
    pq.pop();
    pq.push(myclass(leak,now+chua));
}
return 0;}

