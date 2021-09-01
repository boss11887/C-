#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<long long,int> > pq;
vector<pair<int,int> > vec[100005];
long long mindis[100005];
int head[100005];



int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int from,go,dis;
    scanf("%d %d %d",&from,&go,&dis);
    vec[from].push_back({go,dis});
    vec[go].push_back({from,dis});
}




int st,ed;
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
        if(yao+nak < mindis[go]){
            mindis[go]=yao+nak;
            head[go]=now;
            pq.push({-mindis[go],go});
        }
    }
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
    for(int a=0;a<vec[pos].size();a++){
        if(vec[pos][a].first == go){
            vec[pos][a]={-1,10000};
            break;
        }
    }
    pos=go;
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
if(mindis[ed]==1e15){
    printf("-1");
}else{
    printf("%lld",mindis[ed]);
}
return 0;}
