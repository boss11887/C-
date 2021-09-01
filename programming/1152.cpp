#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
queue<pair<int,pair<int,int> > > q;
int ar[1005][1005];
int fenwick[3000];
int visit[1005][1005];




int main(){
int n;
int ans=0;
int now=1e9;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        scanf("%d",&ar[a][b]);
    }
}
int plusr[]={1,0,-1,0};
int plusc[]={0,-1,0,1};
q.push({0,{n,n+1}});

bool jue=false;
while(now!=1){
int cnt=0;
if(now==1e9){
    now=1;
}
while(!q.empty()){
    int nowr=q.front().second.first;
    int nowc=q.front().second.second;
    int step=q.front().first;
    step++;
    q.pop();
    //printf("%d %d\n",nowr,nowc);
    for(int c=0;c<=3;c++){
        int nr=nowr+plusr[c];
        int nc=nowc+plusc[c];
        if(nr<=0 || nc <=0 || nr > n || nc > n){
            continue;
        }
        if(visit[nr][nc]==1){
            continue;
        }
        visit[nr][nc]=1;
        pq.push(ar[nr][nc]);
        q.push({step,{nr,nc}});
        cnt++;
    }
    if(cnt==now){
        break;
    }
}
//printf("%d\n",now);
if(jue){
    now--;
}else{
    now++;
}
if(now==n){
    jue=true;
}
ans+=pq.top();
pq.pop();
}
printf("%d",ans);
return 0;}
