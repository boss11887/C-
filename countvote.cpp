#include <bits/stdc++.h>
using namespace std;
/*
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
        if(n1.day==n2.day)
            return n1.num>n2.num;
        return n1.day > n2.day;
    }
};
priority_queue<myclass,vector<myclass>,compare> pq;
*/
int ar[105];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=m;a++){
        int chua;
        scanf("%d",&chua);
        ar[chua]++;
    }
    int high=0;
    int highpos;
    for(int a=1;a<=n;a++){
        if(ar[a] > high){
            high=ar[a];
            highpos=a;
        }
    }
printf("%d\n%d",highpos,high);
return 0;}
