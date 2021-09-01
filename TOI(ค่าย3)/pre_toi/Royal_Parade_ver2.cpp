#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<long long,int> > pq;
vector<pair<int,int> > vec[100005];
long long mindis[100005];
int visit[100005];
int head[100005];
vector<int> lobna;


int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int from,go,dis;
    scanf("%d %d %d",&from,&go,&dis);
    vec[from].push_back({go,dis});
    vec[go].push_back({from,dis});
}
long long jatum=0,mua=1e15;
int st,ed;
scanf("%d %d",&st,&ed);
while(1){
        //printf("*");
for(int a=1;a<=n;a++){
    mindis[a]=1e15;
}
mindis[st]=0;
pq.push({0,st});
while(!pq.empty()){
    int now=pq.top().second;
    long long yao=pq.top().first;
    yao=-yao;
    pq.pop();
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a].first;
        long long nak=vec[now][a].second;
        if(yao+nak < mindis[go]){
            mindis[go]=yao+nak;
            head[go]=now;
            pq.push({-mindis[go],go});
        }
    }
}
if(mindis[ed]!=1e15){
jatum=mindis[ed];
if(mua<jatum){
    break;
}else{
    mua=jatum;
}
int pos=ed;
while(pos!= 0){
    int go=head[pos];
    for(int a=0;a<vec[go].size();a++){
        if(vec[go][a].first == pos){
            vec[go][a]={-1,10000};
            break;
        }
    }
    //printf("**%d**",pos);
    lobna.push_back(pos);
    visit[pos]=1;
    //lobna.push_back(go);
    for(int a=0;a<vec[pos].size();a++){
        if(vec[pos][a].first == go){
            vec[pos][a]={-1,10000};
            break;
        }
    }
    pos=go;
}
//printf("\n");
}else{
break;
}
}
for(int a=0;a<lobna.size();a++){
    vec[lobna[a]].clear();
}

scanf("%d %d",&st,&ed);
for(int a=1;a<=n;a++){
    mindis[a]=1e15;
}
mindis[st]=0;
pq.push({0,st});
while(!pq.empty()){
    int now=pq.top().second;
    long long yao=pq.top().first;
    yao=-yao;
    pq.pop();
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a].first;
        long long nak=vec[now][a].second;
        if(go==-1 || visit[go]==1){
            continue;
        }
        if(yao+nak < mindis[go]){
            mindis[go]=yao+nak;
            head[go]=now;
            pq.push({-mindis[go],go});
        }
    }
}
if(mindis[ed]==1e15){
    printf("-1");
}else{
    printf("%lld",mindis[ed]);
}
return 0;}

/*
7 7
1 2 1
2 4 1
4 5 1
5 3 1
3 2 1
6 3 1
7 3 1
1 5
6 7
*/
