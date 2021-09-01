#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

class fridge{
public:
    int day;
    fridge(int day){
    this->day=day;

    }
};


struct op{
bool operator()(const fridge&f1, const fridge&f2){
return f1.day > f2.day;
    }
};


priority_queue<fridge,vector<fridge>,op> pq;
int main(){
int n,item,x;
scanf("%d",&n);
while(n--){
    scanf("%d",&item);
    while(item--){
        scanf("%d",&x);
        pq.push(fridge(x));
    }
    int day=0,now;
    while(day!=pq.top().day){
        day++;
        now = pq.top().day+1;
        pq.pop();
        pq.push(now);
    }
    printf("%d\n",day);
}




return 0;
}
