#include <cstdio>
#include <queue>
using namespace std;
int ar[1001][1000],visited[1001][1001];
queue<pair<int,pair<int,int> > > q;
int main(){
int n;
scanf("%d",&n);
int maxr=n*2-1;
int maxc=n*2-1;
q.push({{1},{n,n}});
visited[n][n]=1;
ar[n][n]=1;
int plusr[]={0,-1,-1,-1,0,1,1,1};
int plusc[]={-1,-1,0,1,1,1,0,-1};
while(!q.empty()){
    for(int a=0;a<=7;a++){
    int nr=q.front().second.first+plusr[a];
    int nc=q.front().second.second+plusc[a];
    int step=q.front().first+1;
    if(nr<1||nc<1||nr>maxr||nc>maxc){
        continue;
    }
    if(visited[nr][nc]==1){
        continue;
    }
    visited[nr][nc]=1;
    ar[nr][nc]=step;
    q.push({{step},{nr,nc}});
    }
    q.pop();
}
for(int a=1;a<=maxr;a++){
    for(int b=1;b<=maxc;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}


return 0;}
