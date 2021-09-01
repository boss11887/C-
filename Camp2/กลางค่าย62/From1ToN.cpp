#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
vector<int> myvec[1005];
stack<int> stk;
queue<int> q;
int head[1005];
int visit[1005];
int backtrack[1005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int u,v,w;
    scanf("%d %d %d",&u,&v,&w);
    vec.push_back({w,{u,v}});
}
sort(vec.begin(),vec.end());
for(int a=1;a<=n;a++){
    head[a]=a;
}
for(int a=0;a<vec.size();a++){
    int from=vec[a].second.first;
    int go=vec[a].second.second;
    int h1=findhead(from);
    int h2=findhead(go);
    if(h1 != h2){
        head[h1]=head[h2];
        //printf("%d %d\n",from,go);
        myvec[from].push_back(go);
        myvec[go].push_back(from);
    }
}
int st=1,ed=n;
q.push(st);
visit[st]=1;
bool jue=false;
backtrack[st]=-1;
while(!q.empty()){
    int now=q.front();
    //printf("%d ",now);
    q.pop();
    for(int a=0;a<myvec[now].size();a++){
        int go=myvec[now][a];
        if(go==ed){
            jue=true;
        }
        if(visit[go]==1){
            continue;
        }
        visit[go]=1;
        backtrack[go]=now;
        q.push(go);
    }
}
int pp=n;
bool tumdai=true;
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
