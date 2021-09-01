#include <bits/stdc++.h>
using namespace std;
vector<int> ar;
vector<pair<int,int> > vec[50005];
int visit[40005];
pair<int,int> pp[50005];
int head[40005];
int n,m,p;

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int bfs(int val){
    //printf("**");
    queue<int> q;
    for(int a=1;a<=p;a++){
    q.push(pp[a].first);
    }
    memset(visit,0,sizeof(visit));
    for(int a=1;a<=n;a++){
        head[a]=a;
        //printf("%d===%d\n",head[a],a);
    }
    while(!q.empty()){
        int now=q.front();
        q.pop();
        //printf("now=%d",now);
        for(int a=0;a<vec[now].size();a++){
            if(vec[now][a].second > val){
                continue;
            }
            int go=vec[now][a].first;
            int h1=findhead(now);
            int h2=findhead(go);
            if(visit[go]==1 && h1==h2){
                continue;
            }
            //printf("h1=%d___h2=%d\n",h1,h2);
            if(h1 != h2){
            visit[go]=1;
            head[h1]=head[h2];
            //printf("%d->%d\n",h1,h2);
            q.push(go);
            }
        }
    }
}
int main(){
scanf("%d %d %d ",&n,&m,&p);
ar.push_back(-1);
for(int a=1;a<=m;a++){
    int from,go,w;
    scanf("%d %d %d",&from,&go,&w);
    ar.push_back(w);
    vec[from].push_back({go,w});
    vec[go].push_back({from,w});
}
for(int a=1;a<=p;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    pp[a]={from,go};
}
sort(ar.begin(),ar.end());
int low=0,high=m,mid;
int ans=0;
while(low<=high){
    mid=(low+high)/2;
    //printf("-->%d\n",ar[mid]);
    bfs(ar[mid]);
    bool jue=false;
    for(int a=1;a<=p;a++){
        //q.push(pp[a].first);
        int h1=findhead(pp[a].first);
        int h2=findhead(pp[a].second);
        //printf("h1=%d___h2=%d\n",h1,h2);
        if(h1 == h2){
            jue=true;
            break;
        }
    }
    if(jue==0){
        low=mid+1;
       // printf("*");
    }else{
        ans=mid;
        high=mid-1;
    }
}
/*
if(ans==1e9){
printf("%d",ar[m]+1);
}else{
*/
printf("%d",ar[ans]);
//}
return 0;}
/*
6 4 2
1 2 10
2 3 15
4 2 20
2 5 25
1 3
4 5
*/
