#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int,int> > vec[100005];
priority_queue<pair<int,int> > pq;
int n,m;
int mindis[4][100005];

int re(int pos,int st,int ed){
    pq.push({0,st});
    for(int a=1;a<=n;a++){
        mindis[pos][a]=1e14;
    }
    mindis[pos][st]=0;

    while(!pq.empty()){
        int now=pq.top().second;
        int nak=pq.top().first;
        nak=-nak;
        pq.pop();
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a].first;
            int w=vec[now][a].second;
            if(nak+w < mindis[pos][go]){
                //printf("%d->%d\n",now,go);
                mindis[pos][go]=nak+w;
                pq.push({-mindis[pos][go],go});
            }
        }
    }
}



main(){
scanf("%lld %lld",&n,&m);
for(int a=1;a<=m;a++){
    int u,v,w;
    scanf("%lld %lld %lld",&u,&v,&w);
    vec[u].push_back({v,w});
    vec[v].push_back({u,w});
}
int st1,ed1,st2,ed2;
scanf("%lld %lld",&st1,&ed1);
scanf("%lld %lld",&st2,&ed2);
re(1,st1,ed1);
re(2,ed1,st1);
/*
for(int a=1;a<=n;a++){
    printf("%d==%d\n",a,mindis[1][a]);
}
*/
vector<int> del;
int low=1e15;
for(int a=1;a<=n;a++){
    if(mindis[1][a]+mindis[2][a] < low){
        del.clear();
        del.push_back(a);
        low=mindis[1][a]+mindis[2][a];
    }else if(mindis[1][a]+mindis[2][a]==low){
        del.push_back(a);
    }
}
for(int a=0;a<del.size();a++){
    vec[del[a]].clear();
}
re(3,st2,ed2);
if(mindis[3][ed2] != 1e14){
    printf("%lld",mindis[3][ed2]);
}else{
    printf("-1");
}
return 0;}

