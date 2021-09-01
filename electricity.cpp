#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> > pq;
int ar[500005];
int mindis[500005];

int main(){
    int n,yao;
    scanf("%d %d",&n,&yao);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    pq.push({-ar[1],1});
    for(int a=2;a<=n;a++){
        while(a-pq.top().second > yao){
            pq.pop();
        }
        int now=pq.top().first;
        now=-now;
        int nowpos=pq.top().second;
        mindis[a]=now+ar[a];
        pq.push({-mindis[a],a});
        //printf("%d\n",mindis[a]);
    }
printf("%d",mindis[n]);
return 0;}
