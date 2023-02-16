#include <bits/stdc++.h>
using namespace std;
pair<int,int> ar[15005];
priority_queue<pair<int,int> > pq;
vector<int> vec;
int mindis[15005];
bool visit[15005];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    ar[a]={from,go};
}
pq.push({0,1});
for(int a=1;a<=n;a++){
    mindis[a]=1e9;
}
mindis[1]=0;
while(!pq.empty()){
    int nak=pq.top().first;
    nak=-nak;
    int now=pq.top().second;
    if(visit[now]==1){
        pq.pop();
        continue;
    }
    visit[now]=1;
    vec.push_back(nak);
    /*else{
        pq.pop();
        continue;
    }*/
    //printf("%d\n",nak);
    pq.pop();
    if(vec.size()==n){
        break;
    }
    for(int a=1;a<=n;a++){
        if(visit[a]==1){
            continue;
        }
        int dis=abs(ar[now].first-ar[a].first)+abs(ar[now].second-ar[a].second);
        if(dis < mindis[a]){
            mindis[a]=dis;
            pq.push({-dis,a});
        }
    }
}
sort(vec.begin(),vec.end());
int ans=0;
for(int a=1;a<n-m+1;a++){
    ans+=vec[a];
}
printf("%d",ans);
return 0;}
/*
5 1
2 9
9 7
14 2
12 9
16 4
*/
