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
priority_queue<pair<int,int> > pq;
int main(){
int n,m;
scanf("%d %d",&n,&m);
int nub=1;
int day=0;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    if(nub<=m){
        pq.push({-chua,-nub});
        printf("%d\n",nub);
        nub++;
    }else{
        int rn=pq.top().first;
        int ans=pq.top().second;
        printf("%d\n",-ans);
        rn-=chua;
        pq.pop();
        pq.push({rn,ans});
    }
}
return 0;}
