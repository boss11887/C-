#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[105];
priority_queue<pair<int,int> > pq;
stack<int> stk;
int backtrack[105];
int mindis[105];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=m;a++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec[u].push_back({v,w});
        vec[v].push_back({u,w});
    }
int st=1,ed=n;
for(int a=1;a<=n;a++){
    mindis[a]=1e9;
}
backtrack[st]=-1;
mindis[st]=0;
bool jue=false;
pq.push({0,st});
while(!pq.empty()){
    int now=pq.top().second;
    int nak=pq.top().first;
    nak=-nak;
    //printf("%d",now);
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a].first;
        int w=vec[now][a].second;
        if(go==ed){
            jue=true;
        }
        if(nak+w < mindis[go]){
            mindis[go]=nak+w;
            pq.push({-mindis[go],go});
            backtrack[go]=now;
        }
    }
    pq.pop();
}
int pp=ed;
if(jue==true){
while(pp!=-1){
    stk.push(pp);
    //printf("%d ",pp);
    pp=backtrack[pp];
}
while(!stk.empty()){
    printf("%d ",stk.top());
    stk.pop();
}
}else{
printf("-1");
}
return 0;}
