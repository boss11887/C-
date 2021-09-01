#include <bits/stdc++.h>
using namespace std;
vector<int > vec[100005];
int val[100005];
int visit[100005];
int use[100005];
int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int a=1;a<=n;a++){
        scanf("%d",&val[a]);
    }
    for(int b=1;b<=m;b++){
        int from,go;
        scanf("%d %d",&from,&go);
        vec[from].push_back(go);
        vec[go].push_back(from);
    }
    for(int a=1;a<=n;a++){
        memset(visit,0,sizeof(visit));
        memset(use,0,sizeof(use));
        visit[a]=1;
        int cnt=1;
        int tum=0;
        use[val[a]]=1;
        queue<pair<int,int> > q;
        q.push({a,1});
        while(!q.empty()){
            //printf("gi");
            int now=q.front().first;
            int nub=q.front().second;
            q.pop();
            for(int a=0;a<vec[now].size();a++){
                if(visit[vec[now][a]]==1){
                    continue;
                }
                visit[vec[now][a]]=1;
                //printf("goto %d %d",vec[now][a],nub);
                if(use[val[vec[now][a]]] == 0){
                    use[val[vec[now][a]]]=1;
                    cnt++;
                    //printf("==%d==\n",nub);
                    tum+=nub;
                    if(cnt==k){
                        while(!q.empty()){
                            q.pop();
                        }
                    }
                }
                q.push({vec[now][a],nub+1});
            }
        }
        printf("ans=%d**** ",tum);
    }
}
