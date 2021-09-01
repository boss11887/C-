#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<long long,long long> > pq;
vector<pair<long long,long long> > vec[100005];
long long mindis[100005];
long long head[100005];



int main(){
long long n,m;
scanf("%lld %lld",&n,&m);
for(int a=1;a<=m;a++){
    long long from,go,dis;
    scanf("%lld %lld %lld",&from,&go,&dis);
    vec[from].push_back({go,dis});
    vec[go].push_back({from,dis});
}




long long st,ed;
scanf("%lld %lld",&st,&ed);
for(int a=0;a<vec[st].size();a++){
    if(vec[st][a].first == ed){
        vec[st][a]={-1,0};
        break;
    }
}
for(int a=0;a<vec[ed].size();a++){
    if(vec[ed][a].first == st){
        vec[ed][a]={-1,0};
        break;
    }
}

scanf("%lld %lld",&st,&ed);
for(int a=1;a<=n;a++){
    mindis[a]=1e15;
}
mindis[st]=0;
pq.push({0,st});
while(!pq.empty()){
    long long now=pq.top().second;
    long long yao=pq.top().first;
    yao=-yao;
    pq.pop();
    for(int a=0;a<vec[now].size();a++){
        long long go=vec[now][a].first;
        long long nak=vec[now][a].second;
        if(go==-1){
            continue;
        }
        if(yao+nak < mindis[go]){
            mindis[go]=yao+nak;
            head[go]=now;
            pq.push({-mindis[go],go});
        }
    }
}
    printf("%lld",mindis[ed]);
return 0;}
