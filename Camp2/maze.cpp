#include <cstdio>
#include <queue>
using namespace std;
queue<pair<int,int> > q;
queue<pair<int,pair<int,int> > > sq;
bool jue=false;
int visited[200][200],visited2[200][200],count=0,visited3[200][200],dis,nub[200][200];
int main(){
int ar[200][200],str,stc,edr,edc,r,c;
scanf("%d %d",&r,&c);
scanf("%d %d",&str,&stc);
scanf("%d %d",&edr,&edc);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
    }
}

int plusr[]={1,0,-1,0};
int plusc[]={0,1,0,-1};

q.push({str,stc});
while(!q.empty()){
    for(int a=0;a<=3;a++){
        int nowr=q.front().first+plusr[a];
        int nowc=q.front().second+plusc[a];
        if(nowr>r||nowc>c||nowr<1||nowc<1){
            continue;
        }
        if(visited[nowr][nowc]==1){
            continue;
        }
        if(ar[nowr][nowc]==0||ar[nowr][nowc]==2){
            ar[nowr][nowc]=2;
            continue;
        }
        visited[nowr][nowc]=1;
        q.push({nowr,nowc});
    }
    q.pop();
}

q.push({edr,edc});
visited2[edr][edc]=1;
while(!q.empty()){
    for(int a=0;a<=3;a++){
        int nowr=q.front().first+plusr[a];
        int nowc=q.front().second+plusc[a];
        if(nowr>r||nowc>c||nowr<1||nowc<1){
            continue;
        }
        if(visited2[nowr][nowc]==1||nub[nowr][nowc]==1){
            continue;
        }
        if(ar[nowr][nowc]==0){
            continue;
        }
        if(ar[nowr][nowc]==2&&nub[nowr][nowc]==0){
            count++;
            nub[nowr][nowc]=1;
            ar[nowr][nowc]=1;
            continue;
        }
        visited2[nowr][nowc]=1;
        q.push({nowr,nowc});
    }
    q.pop();
}


sq.push({1,{str,stc}});
while(!sq.empty()){
    for(int a=0;a<=3;a++){
        int nowr=sq.front().second.first+plusr[a];
        int nowc=sq.front().second.second+plusc[a];
        int step=sq.front().first;
        step++;
        if(nowr>r||nowc>c||nowr<1||nowc<1){
            continue;
        }
        if(visited3[nowr][nowc]==1){
            continue;
        }
        if(ar[nowr][nowc]==0||ar[nowr][nowc]==2){
            continue;
        }
        if(nowr==edr&&nowc==edc){
            dis=step;
            jue=true;
            break;
        }
        visited3[nowr][nowc]=1;
        sq.push({step,{nowr,nowc}});
    }
    if(jue==true){
    break;
    }
    sq.pop();
}
/*printf("\n");

for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}*/
printf("%d\n%d",count,dis);
return 0;}
