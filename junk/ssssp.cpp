#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> > pq;
vector<pair<int,int> > vec[20005];
int mindis[20005];

int main(){
int q;
scanf("%d",&q);
int mq=q;
while(q--){
    int edge,vertex,st,ed;
    scanf("%d %d %d %d",&vertex,&edge,&st,&ed);
    for(int a=1;a<=edge;a++){
        int from,go,nak;
        scanf("%d %d %d",&go,&from,&nak);
        vec[from].push_back({go,nak});
        vec[go].push_back({from,nak});
    }
    for(int a=0;a<vertex;a++){
        mindis[a]=1e9;
    }
    mindis[st]=0;
    pq.push({0,st});
    while(!pq.empty()){
        int nak=pq.top().first;
        nak=-nak;
        int now=pq.top().second;
        pq.pop();
        if(nak != mindis[now]){
            //printf("/");
            continue;
        }
        //printf("*");
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a].first;
            int w=vec[now][a].second;
            if(nak+w < mindis[go]){
                mindis[go]=nak+w;
                pq.push({-mindis[go],go});
            }
        }
    }
    for(int a=0;a<vertex;a++){
        vec[a].clear();
    }
    if(mindis[ed] != 1e9){
        printf("Case #%d: %d\n",mq-q,mindis[ed]);
    }else{
        printf("Case #%d: unreachable\n",mq-q);
    }
}


return 0;}
