#include <bits/stdc++.h>
using namespace std;
queue<int> tum;
queue<int> q;
vector<int> vec[200005];
int visit[200005];
int use[200005];
int jatum[200005];
int  main(){
int n;
int cnt=0;

scanf("%d",&n);
for(int a=1;a<n;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    vec[from].push_back(go);
    vec[go].push_back(from);
    use[go]++;
    use[from]++;
}

for(int a=n;a>=1;a--){
    jatum[a]=use[a];
    if(use[a]==1){
        q.push(a);
    }
}
int ans=0;

memset(visit,0,sizeof(visit));
memset(use,0,sizeof(use));
cnt=0;
while(!q.empty()){
    int now=q.front();
    for(int a=0;a<vec[now].size();a++){
            if(use[now]==0 && use[vec[now][a]]==0){
                use[now]=1;
                use[vec[now][a]]=1;
                cnt++;
                visit[vec[now][a]]=1;
                visit[now]=1;
                jatum[now]--;
                jatum[vec[now][a]]--;
                if(jatum[vec[now][a]]==1){
                    int doo=vec[now][a];
                    for(int a=0;a<vec[doo].size();a++){
                        if(visit[vec[doo][a]]==0){
                            q.push(vec[doo][a]);
                            visit[vec[doo][a]]=1;
                            jatum[vec[doo][a]]--;
                            }
                    }
                }
                //printf("%d %d\n",now,vec[now][a]);
            }
    }
    q.pop();
}
ans=max(ans,cnt);

printf("%d",ans);
return 0;}
/*
15
6 14
2 6
1 11
14 11
7 1
9 7
4 11
5 3
13 10
3 14
8 13
10 11
12 5
15 4
*/
/*
15
1 6
7 2
14 12
6 10
8 5
13 3
9 14
5 9
12 4
2 11
15 8
4 13
3 1
10 7
*/
