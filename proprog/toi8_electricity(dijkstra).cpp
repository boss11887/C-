#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[500005];
priority_queue<pair<int,int> > pq;
int ar[500005];
int mindis[500005];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    int st=a-m;
    if(st<1){
        st=1;
    }
    for(int b=st;b<a;b++){
        vec[a].push_back({b,ar[b]});
        vec[b].push_back({a,ar[b]});
    }
}
    pq.push({0,1});
    mindis[1]=0;
    for(int a=1;a<=n;a++){
        mindis[a]=1e8;
    }
    while(!pq.empty()){
        int nowpos=pq.top().second;
        int noww=pq.top().first;
        noww=-noww;
        for(int e=0;e<vec[nowpos].size();e++){
            int go=vec[nowpos][e].first;
            int nak=vec[nowpos][e].second;
            if(noww + nak < mindis[go]){
                mindis[go]=noww+nak;
                pq.push({-mindis[go],go});
            }
        }
        pq.pop();
    }
    printf("%d",mindis[n]+ar[n]);
return 0;}
