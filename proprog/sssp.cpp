#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[20005];
priority_queue<pair<int,int> > pq;
int mindis[20005];

int main(){
int n;
scanf("%d",&n);
int ttt=n;
while(n--){
    int vertex,edge,st,ed;
    scanf("%d %d %d %d",&vertex,&edge,&st,&ed);
    for(int a=1;a<=edge;a++){
        int f,g,ww;
        scanf("%d %d %d",&f,&g,&ww);
        vec[f].push_back({g,ww});
        vec[g].push_back({f,ww});
    }
    for(int a=0;a<=vertex;a++){
        mindis[a]=1e8;
    }
    mindis[st]=0;
    pq.push({0,st});
    while(!pq.empty()){
        int nowpos=pq.top().second;
        int noww=pq.top().first;
        noww=-noww;
        for(int a=0;a < vec[nowpos].size(); a++){
            int go=vec[nowpos][a].first;
            int nak=vec[nowpos][a].second;
            if(noww+nak < mindis[go]){
                mindis[go]=noww+nak;
                pq.push({-mindis[go],go});
            }
        }
        pq.pop();
    }
    if(mindis[ed] != 1e8){
    printf("Case #%d: %d\n",ttt-n,mindis[ed]);
    }else{
    printf("Case #%d: unreachable\n",ttt-n);
    }
    for(int a=0;a<=vertex;a++){
        vec[a].clear();
    }
}


return 0;}
