#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<long long,int> > pq;
vector<pair<int,int> > vec[2][10005];
//vector<pair<int,int> > vec2[10005];
int n,m,st,ed,val;
long long mindis[2][10005];

int dijkstra(int st,int pos){
    for(int a=1;a<=n;a++){
        mindis[pos][a]=1e12;
    }
    pq.push({0,st});
    mindis[pos][st]=0;
    while(!pq.empty()){
        int now=pq.top().second;
        long long nak=pq.top().first;
        nak=-nak;
        pq.pop();
        if(nak != mindis[pos][now]){
            continue;
        }
        for(int a=0;a<vec[pos][now].size();a++){
            int go=vec[pos][now][a].first;
            int w=vec[pos][now][a].second;
            if(mindis[pos][go] > nak+w){
                mindis[pos][go]=nak+w;
                pq.push({-mindis[pos][go],go});
            }
        }
    }
}
int main(){
int t;
scanf("%d",&t);
while(t--){
    scanf("%d %d %d %d %d",&n,&m,&st,&ed,&val);
    for(int a=1;a<=m;a++){
        int from,go,w;
        scanf("%d %d %d",&from,&go,&w);
        vec[0][from].push_back({go,w});
        vec[1][go].push_back({from,w});
    }
    dijkstra(st,0);
    dijkstra(ed,1);
    int ans=-1;
    for(int a=1;a<=n;a++){
        for(int b=0;b<vec[0][a].size();b++){
            int now=a;
            int go=vec[0][a][b].first;
            int ww=vec[0][a][b].second;
            //printf("%d %d \n",now,mindis[0][now]);
            if(mindis[0][now]+ mindis[1][go] + ww <= val && ww > ans){
                ans=ww;
            }
        }
    }
    printf("%d\n",ans);
    for(int a=1;a<=n;a++){
    vec[0][a].clear();
    vec[1][a].clear();
    }
    //vec[1].clear();
}


return 0;}
/*
2
5 6 1 1 10
1 2 0
2 5 0
1 3 0
3 5 0
1 4 0
4 5 0
2 1 1 2 10
1 2 20
*/
