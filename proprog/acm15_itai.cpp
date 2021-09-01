#include <bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int> vec[1005];
int hv[1005];
int main(){
int t;
scanf("%d",&t);
while(t--){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int a=1;a<=m;a++){
        int f,g;
        scanf("%d %d",&f,&g);
        vec[f].push_back(g);
        vec[g].push_back(f);
    }
    for(int a=1;a<=k;a++){
        int chua;
        scanf("%d",&chua);
        q.push(chua);
        hv[chua]=1;
    }
    while(!q.empty()){
        int now=q.front();
        for(int a=0;a < vec[now].size();a++){
            int go=vec[now][a];
            hv[go]=1;
        }
        q.pop();
    }
    int cnt=0;
    for(int a=1;a<=n;a++){
        if(hv[a]==1){
            cnt++;
            //printf("DBG %d\n",a);
        }
    }
    printf("%d\n",cnt);
    for(int a=1;a<=n;a++){
        vec[a].clear();
    }
    memset(hv,0,sizeof(hv));
}


return 0;}
