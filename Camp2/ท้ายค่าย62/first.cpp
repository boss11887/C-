#include <bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int> vec[505];
vector<int> highcnt;
int visit[505];


int main(){
int n,m;
int high=0;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec[u].push_back(v);
}
for(int a=0;a<n;a++){
    q.push(a);
    int cnt=0;
    memset(visit,0,sizeof(visit));
    visit[a]=1;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        for(int b=0;b<vec[now].size();b++){
            int go=vec[now][b];
            if(visit[go]==1){
                continue;
            }
            visit[go]=1;
            cntstyle="background-color:#aaff00;"++;
            q.push(go);
        }
    }
    //printf("**%d  ",cnt);
    if(cnt>high){
        high=cnt;
        highcnt.clear();
        highcnt.push_back(a);
    }else if(cnt==high){
        highcnt.push_back(a);
    }
}
printf("%d\n",high);
sort(highcnt.begin(),highcnt.end());
for(int a=0;a<highcnt.size();a++){
    printf("%d ",highcnt[a]);
}
return 0;}
/*
7 8
0 1
0 2
1 3
4 1
5 2
5 6
6 0
6 4
*/


/*
9 14
0 3
4 5
0 2
1 0
2 1
5 6
2 4
3 4
4 5
4 7
8 7
5 6
5 4
6 7
*/
