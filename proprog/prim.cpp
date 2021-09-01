#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> > pq;
//vector<int> vec[15005];
vector<int> mv;
bool visit[15005];
pair<int,int> ar[15005];
int mindis[15005];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    mindis[a]=1e9;
}
for(int a=1;a<=n;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    ar[a]={from,go};
}
mindis[1]=0;
pq.push({0,1});
while(!pq.empty()){
    int w=pq.top().first;
    int now=pq.top().second;
    w=-w;
    if(mv.size()==n){
        //printf("yeah");
        break;
    }
    if(w==mindis[now]){
        mv.push_back(w);
    }else{
        pq.pop();
        continue;
    }
    visit[now]=1;
    pq.pop();
    for(int a=1;a<=n;a++){
        if(visit[a]==1){
            continue;
        }
        int dis=abs(ar[now].first-ar[a].first)+abs(ar[now].second-ar[a].second);
        if(dis < mindis[a]){
        pq.push({-dis,a});
        mindis[a]=dis;
        }
    }
}
sort(mv.begin(),mv.end());
long long ans=0;
for(int a=0;a<mv.size()-m+1;a++){
    //printf("%d\n",mv[a]);
    ans+=mv[a];
}
printf("%lld",ans);
return 0;}
