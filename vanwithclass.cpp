#include <cstdio>
#include <queue>
using namespace std;

class Van{
public:
    int num,day;
    Van(int num,int day){
        this->num = num;
        this->day = day;
    }
};

struct compare{
    bool operator()(const Van & n1, const Van&n2){
        if(n1.day==n2.day)
            return n1.num>n2.num;
        return n1.day > n2.day;
    }
};

struct hh{
    size_t operator()(const pair<int,int>&a)const{
        return a.first+a.second;
    }
};
priority_queue<Van,vector<Van>,compare > pq;
int main(){
int n,m;
scanf("%d %d",&n,&m);
int nub=1;
int day=0;
for(int a=1;a<=m;a++){
    pq.push(Van(a,0));
}
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    int now=pq.top().day;
    int num=pq.top().num;
    printf("%d\n",num);
    pq.pop();
    pq.push(Van(num,chua+now));
}
return 0;}
