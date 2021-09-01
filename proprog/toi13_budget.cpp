#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long> > vec[10005];
priority_queue<pair<long long,int> > pq;
long long mindis[3][10005];
int n,m;

int dijkstra(int pos,int st){
    for(int a=0;a<n;a++){
        mindis[pos][a]=1e14;
    }
    mindis[pos][st]=0;
    pq.push({0,st});
    while(!pq.empty()){
        int now=pq.top().second;
        long long nak=pq.top().first;
        nak=-nak;
        pq.pop();
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a].first;
            long long val=vec[now][a].second;
            if(val + nak < mindis[pos][go]){
                mindis[pos][go]=val+nak;
                pq.push({-mindis[pos][go],go});
            }
        }
    }
}

int main(){
int st,ed,val;
scanf("%d %d",&n,&m);
scanf("%d %d %d",&st,&ed,&val);
for(int a=1;a<=m;a++){
    int u,v;
    long long w;
    scanf("%d %d %lld",&u,&v,&w);
    vec[u].push_back({v,w});
    vec[v].push_back({u,w});
}
dijkstra(1,st);
dijkstra(2,ed);
if(mindis[1][ed] <= val){
    printf("%d %lld 0",ed,mindis[1][ed]);
}else{
    int ans,low=1e9,tob;
    for(int a=n-1;a>=0;a--){
        if(mindis[1][a] <= val && mindis[2][a] <=low){
            low=mindis[2][a];
            tob=mindis[1][a];
            ans=a;
        }
    }
    printf("%d %d %d",ans,tob,low);
}
return 0;}
