#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

class yen{
public:
    int day;
    yen(int day){
    this->day=day;
    }
};

struct op{
bool operator()(const yen&i1,const yen&i2){
    return i1.day > i2.day;
    }
};
priority_queue<yen,vector<yen>,op> pq;

int ar[2000];
int main(){
int n;
scanf("%d",&n);
while(n--){
    int item;
    scanf("%d",&item);
    for(int a=1;a<=item;a++){
        scanf("%d",&ar[0]);
        pq.push(yen(ar[0]));
    }
    for(int day=0;day<=6000;day++){
        int first=pq.top().day;
        if(day==first){
            printf("%d\n",day);
            break;
        }first++;
        pq.pop();
        pq.push(yen(first));
    }
    while(!pq.empty()){
        pq.pop();
    }
}



return 0;}
