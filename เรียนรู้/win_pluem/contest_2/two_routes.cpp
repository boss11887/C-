#include <bits/stdc++.h>
using namespace std;
vector<int> vec[405];
vector<int> sv[405];
queue<pair<int,int> > q;
int ar[405][405];
int visit[405];
int main(){
int n,m;
scanf("%d %d",&n,&m);
memset(ar,-1,sizeof(ar));
for(int a=1;a<=m;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    vec[from].push_back(go);
    vec[go].push_back(from);
    ar[from][go]=1;
    ar[go][from]=1;
}
for(int a=1;a<=n;a++){
    for(int b=a+1;b<=n;b++){
        if(ar[a][b] !=1){
            ar[a][b]=0;
            sv[a].push_back(b);
            sv[b].push_back(a);
            //printf("%d %d\n",a,b);
        }
    }
}
int high=1e8;
if(ar[1][n]==0){
q.push({1,0});
//printf("goin");
while(!q.empty()){
    int now=q.front().first;
    int step=q.front().second;
    q.pop();
    //printf("==%d %d\n",now,step);
    if(now==n){
        high=min(high,step);
    }
    for(int a=0;a<vec[now].size();a++){
        //printf("%d\n",vec[now][a]);
        if(visit[vec[now][a]]==1){
            continue;
        }
        visit[vec[now][a]]=1;
        q.push({vec[now][a],step+1});
    }
}
}else{

    q.push({1,0});
//printf("goin");
while(!q.empty()){
    int now=q.front().first;
    int step=q.front().second;
    q.pop();
    //printf("==%d %d\n",now,step);
    if(now==n){
        high=min(high,step);
    }
    for(int a=0;a<sv[now].size();a++){
        //printf("%d\n",sv[now][a]);
        if(visit[sv[now][a]]==1){
            continue;
        }
        visit[sv[now][a]]=1;
        q.push({sv[now][a],step+1});
    }
    }
}
if(high!=1e8){
printf("%d",high);
}else{
printf("-1");
}
return 0;}
