#include <bits/stdc++.h>
using namespace std;
int ar[10005];
vector<pair<int,int> > vec[10];
vector<int> point[10005];
int chk[10];
int n,k;
int visit[10];
int used[10005];
int low=1e9;
int sum=0;
void re(int a){
    printf("%d ",a);
    if(a==k+1){
        low=min(low,sum);
        printf("(%d)\n",low);
        printf("***");
        /*
        for(int c=1;c<=k;c++){
            printf("-%d-",used[c]);
        }
        */
        return;
    }
    int qq,pos;
    for(int b=1;b<=k;b++){
        if(visit[b]==0){
            printf("==%d== ",b);
            visit[a]=1;
            for(int ss=0;ss<vec[b].size();ss++){
                pos=vec[b][ss].second;
                if(used[pos]==0){
                    used[pos]=1;
                    sum+=vec[b][ss].first;
                    //printf("==(%d %d)",b,pos);
                    //printf("reset..%d..",b);
                    qq=vec[b][ss].first;
                    return ;
                }
            }
        re(a+1);
        used[pos]=0;
        visit[a]=0;
        sum-=qq;
        }
    }
}


int main(){
    scanf("%d %d",&n,&k);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
        for(int b=1;b<=k;b++){
            int chua;
            scanf("%d",&chua);
            if(chua == 1){
                vec[b].push_back({ar[a],a});
                point[a].push_back(b);
            }
        }
    }
    for(int b=1;b<=k;b++){
        sort(vec[b].begin(),vec[b].end());
    }
    for(int a=1;a<=k;a++){
        re(a);
    }
    printf("%d",low);
    return 0;
}
