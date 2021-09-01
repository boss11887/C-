#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[4];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec[w].push_back({u,v});
    }
    /*
    int myv=vec[1][0].second;
    int aow=vec[1][0].first;
    for(int b=1;b<vec[1].size();b++){
        if(myv >= vec[1][b].first){
            vec.erase({vec[1][b].first,0});
            vec[1][b]={aow,vec[1][b].second};
        }
        int myv=vec[1][b].second;
        int aow=vec[1][b].first;
    }
    */
    sort(vec[1].begin(),vec[1].end());
    sort(vec[2].begin(),vec[2].end());
    for(int a=1;a<=m;a++){
        int chua;
        scanf("%d",&chua);
        int cnt=vec[2].size()+vec[1].size();
        for(int b=0;b<vec[1].size();b++){
            int st=vec[1][b].first;
            int ed=vec[1][b].second;
            st-=chua;
            ed-=chua;
            if(ed<1){
                cnt--;
            }
            for(int c=0;c<vec[2].size();c++){
                int st1=vec[2][c].first;
                int ed1=vec[2][c].second;
                st1+=chua;
                ed1+=chua;
                //printf("%d %d--%d %d\n",st,ed,st1,ed1);
                if(st1 <= ed && st <= ed1){
                    cnt--;
                }
            }
        }
        for(int c=0;c<vec[2].size();c++){
                int st1=vec[2][c].first;
                st1+=chua;
                //printf("%d %d--%d %d\n",st,ed,st1,ed1);
                if(st1>1e9){
                    cnt--;
                }
        }
        printf("%d\n",cnt);
    }
return 0;}
