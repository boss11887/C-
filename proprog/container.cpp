#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[20005];
priority_queue<pair<int,int> > pq;
int mindis[20005];

int main(){
int t;
scanf("%d",&t);
for(int q=1;q<=t;q++){
    int n,m,st,ed;
    scanf("%d %d %d %d",&n,&m,&st,&ed);
    for(int a=0;a<=n;a++){
        mindis[a]=1e8;
    }
    mindis[st]=0;
    for(int a=1;a<=m;a++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec[u].push_back({v,w});
        vec[v].push_back({u,w});
    }
    pq.push({0,st});
    while(!pq.empty()){
        int now=pq.top().second;
        int ww=pq.top().first;
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a].first;
            int nak=vec[now][a].second;
            nak=-nak;
            if(nak+ww < mindis[go]){
                mindis[go]=nak+ww;
                pq.push({-mindis[go],go});
            }
        }
        pq.pop();
    }
    if(mindis[ed] != 1e8){
    printf("Case #%d: %d\n",q,mindis[ed]);
    }else{
    printf("Case #%d: unreachable\n",q);
    }
    for(int a=0;a<n;a++){
        vec[a].clear();
    }
}
return 0;
}
