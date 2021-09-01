#include <bits/stdc++.h>
using namespace std;
vector<int> vec[200005];
queue<pair<int,int> > q;
int visit[200005];

int main(){
int key,n,kao;
scanf("%d %d %d",&key,&n,&kao);
for(int a=1;a<=n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec[u].push_back(v);
}
for(int a=0;a<key;a++){
    vec[a].push_back(a+1);
}
q.push({0,0});
int high=0;
int low=0;
while(!q.empty()){
    int now=q.front().second;
    int step=q.front().first;
    step++;
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a];
        if(visit[go]==1){
            continue;
        }
        visit[go]=1;
        //printf("--%d %d\n",step,go);
        if(step==kao && go > high){
            high=go;
        }
        if(go==key){
            low=step;
            if(high==0){
                printf("%d\n1",low);
            }else{
                printf("%d\n0 %d",low,high);
            }
            return 0;
        }
        q.push({step,go});
    }
    q.pop();
}
}
