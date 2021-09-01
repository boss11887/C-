#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[200005];
int mindis[200005];
int visit[200005];
long long total=0;
int main(){
int n,m;
while(1){
    memset(visit,0,sizeof(visit));
    total=0;
scanf("%d %d",&n,&m);
if(n==0 && m==0){
    break;
}
for(int a=0;a<n;a++){
    mindis[a]=1e9;
}
for(int a=1;a<=m;a++){
    int from,go,w;
    scanf("%d %d %d",&from,&go,&w);
    total+=w;
    vec[from].push_back({go,w});
    vec[go].push_back({from,w});
}
priority_queue<pair<int,int> > pq;
pq.push({0,0});
int ans=0;
int nubb=0;
while(!pq.empty()){
    int nak=pq.top().first;
    nak=-nak;
    int now=pq.top().second;
    if(nubb==n){
        //printf("**");
        break;
    }
    if(visit[now]==0){
        ans+=nak;
        nubb++;
    }else{
        pq.pop();
        continue;
    }
    visit[now]=1;
    pq.pop();
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a].first;
        int w=vec[now][a].second;
        if(w < mindis[go]){
            mindis[go]=w;
            pq.push({-w,go});
        }
    }
}
for(int a=0;a<n;a++){
    vec[a].clear();
}
printf("%d\n",total-ans);
}
return 0;}
