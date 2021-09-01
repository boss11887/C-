#include <bits/stdc++.h>
using namespace std;
vector<int> vec[150];
stack<int>stk;
long long head[150];
int n;
int visit[150];
void dfs(int now){
    for(int a=0;a<vec[now].size();a++){
        if(visit[vec[now][a]]==0){
        dfs(vec[now][a]);
        visit[vec[now][a]]=1;
        }
    }
    stk.push(now);
}

int main(){
bool jue=false;

while(scanf("%d",&n) != EOF){
if(jue==true){
    printf("\n");
}
jue=true;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    for(int b=1;b<=chua;b++){
        int val;
        scanf("%d",&val);
        vec[a-1].push_back(val);
    }
}
dfs(0);
head[0]=1;
long long ans=0;
    while(!stk.empty()){
        int now=stk.top();
        //printf("==%d\n",stk.top());
        stk.pop();
        if(vec[now].size()==0){
            ans+=head[now];
        }
        for(int a=0;a<vec[now].size();a++){
            int go=vec[now][a];
            head[go]+=head[now];
        }
    }
    printf("%lld\n",ans);
    for(int a=0;a<n;a++){
    vec[a].clear();
    }
    memset(visit,0,sizeof(visit));
    memset(head,0,sizeof(head));
}
return 0;}
