#include <cstdio>
#include <queue>
using namespace std;
long long count;
int lr,lc,mr,mc;
int n,nr,nc,r,c;
int plusr[]={0,-1,0,1};
int plusc[]={-1,0,1,0};
int ar[2001][2001],visited[2001][2001];

int bfs(int ro,int co){

    for(int a=0;a<=3;a++){
    int newr=ro+plusr[a];
    int newc=co+plusc[a];

    if(newr<1||newc<1||newr>r||newc>c){
        continue;
    }
    if(ar[newr][newc]==0||visited[newr][newc]==1){
        continue;
    }
    if(newr>mr){
        mr=newr;
    }
    if(newc>mc){
        mc=newc;
    }
    if(newr<lr){
        lr=newr;
    }
    if(newc<lc){
        lc=newc;
    }
    count++;
    visited[newr][newc]=1;
    bfs(newr,newc);
    }


}


int main(){
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
    }
}
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&nr,&nc);
    lr=nr;
    lc=nc;
    mr=nr;
    mc=nc;
    if(ar[nr][nc]==1){
    count=1;
    visited[nr][nc]=1;
    bfs(nr,nc);
    printf("%lld\n",count);
    //printf("%d->%d...%d->%d\n",lr,mr,lc,mc);
    for(int i=lr;i<=mr;i++){
        for(int k=lc;k<=mc;k++){
            if(visited[i][k]==1&&ar[i][k]==1){
            visited[i][k]=0;
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }else{
    printf("-\n");
    }
}


return 0;}
