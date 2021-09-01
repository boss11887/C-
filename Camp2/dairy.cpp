#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[20005];
priority_queue<pair<int,int> > pq;
int mindis[20005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int vertex,edge,st,ed;
    scanf("%d %d %d %d",&vertex,&edge,&st,&ed);
    for(int b=1;b<=edge;b++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec[u].push_back({v,w});
        vec[v].push_back({u,w});
    }
    for(int b=0;b<vertex;b++){
        mindis[b]=1e8;
    }
    mindis[st]=0;
    pq.push({0,st});
    while(!pq.empty()){
        int now=pq.top().second;
        int nak=pq.top().first;
        nak=-nak;
        pq.pop();
        if(mindis[now] != nak){
            continue;
        }
        for(int b=0;b < vec[now].size();b++){
            int go=vec[now][b].first;
            int weight=vec[now][b].second;
            if(nak + weight < mindis[go]){
                mindis[go]=nak+weight;
                pq.push({-mindis[go],go});
            }
        }
    }
    if(mindis[ed] != 1e8){
        printf("Case #%d: %d\n",a,mindis[ed]);
    }else{
        printf("Case #%d: unreachable\n",a);
    }
    for(int b=0;b<vertex;b++){
        vec[b].clear();
    }
}
return 0;}
