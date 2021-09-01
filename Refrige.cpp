#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        for(int a=1;a<=n;a++){
            int chua;
            scanf("%d",&chua);
            pq.push(-chua);
        }
        int day=0;
        while(1){
            int now=pq.top();
            pq.pop();
            now=-now;
            if(now==day){
                break;
            }
            now++;
            day++;
            pq.push(-now);
        }
        printf("%d\n",day);
        while(!pq.empty()){
        pq.pop();
        }
    }

return 0;}
