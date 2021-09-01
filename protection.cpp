#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
#pragma GCC optimize("Ofast")
using namespace std;
class myclass{
public:
    int level;
    int r;
    int c;
    myclass(int level,int r,int c){
        this->level = level;
        this->r=r;
        this->c=c;
    }
};

struct compare{
bool operator()(const myclass&n1,const myclass&n2){
        return n1.level > n2.level;
}
};
priority_queue<myclass,vector<myclass>,compare> q;
int ar[1005][1005];
int aow[1005][1005];
int visit[1005][1005];

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    for(int a=1; a<=row; ++a)
    {
        for(int b=1; b<=col; ++b)
        {
            scanf("%d",&ar[a][b]);
            aow[a][b]=1e8;
            if(a==1 || b==1 || a==row || b==col)
            {
                q.push(myclass(ar[a][b],a,b));
                //printf("%d %d\n",a,b);
                aow[a][b]=ar[a][b];
            }
        }
    }
    int plusr[]= {1,0,-1,0};
    int plusc[]= {0,1,0,-1};
    /*while(!q.empty()){
        printf("%d \n",q.top().level);
        q.pop();
    }*/
    while(!q.empty())
    {
        int val=q.top().level;
        int nowr=q.top().r;
        int nowc=q.top().c;
        q.pop();
        for(int e=0; e<=3; ++e)
        {
            int gor=nowr+plusr[e];
            int goc=nowc+plusc[e];
            if(visit[gor][goc]==1){
                continue;
            }
            visit[gor][goc]=1;
            if(aow[gor][goc] > aow[nowr][nowc])
            {
                q.push(myclass(val+ar[gor][goc],gor,goc));
                aow[gor][goc]=val;
            }
        }
    }
    int high=0;
    int cnt=1;
    //printf("\n");
    for(int a=1; a<=row; ++a)
    {
        for(int b=1; b<=col; ++b)
        {
            if(aow[a][b]==high && ar[a][b]==0)
            {
                cnt++;
            }
            else if(aow[a][b]>high && ar[a][b]==0)
            {
                high=aow[a][b];
                cnt=1;
            }
            //printf("%d ",aow[a][b]);
        }
        //printf("\n");
    }

    printf("%d %d",high,cnt);
    return 0;
}



/*
6 6
0 0 0 0 0 0
1 1 1 1 1 0
0 0 0 0 1 0
0 1 0 0 1 0
0 1 1 1 1 0
0 0 0 0 0 0
*/
