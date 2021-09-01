#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int main(){
    int n,k;
    int high=0;
    int now=0;
    scanf("%d %d",&n,&k);
    int cal=k*2+2;
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        now+=chua;
        dq.push_back(chua);
        if(now<0){
            now=0;
            dq.clear();
        }
        //printf("%d %d\n",ed,st);
        if(dq.size()>=cal){
            now-=dq.front();
            dq.pop_front();
        }
        if(now > high){
            high=now;
        }
    }
    printf("%d",high);
}
