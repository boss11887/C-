#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100005];
int mindis[100005];
priority_queue<pair<int,int> > pq;

int main(){
    int n,m;
    for(int a=1;a<=n;a++){
        mindis[a]=1e9;
    }
    mindis[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        int now=pq.top().second;
        int nak=pq.top().first;
        nak=-nak;
        pq.pop();
        if(nak != mindis[now]){
            continue;
        }
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a].second;
            int w=vec[now][a].first;
            if(mindis[go] > nak + w){
                mindis[go]=nak+w;
                pq.push({-mindis[go],go});
            }
        }
    }
}
