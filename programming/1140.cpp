#include <bits/stdc++.h>
using namespace std;
    queue<pair<int,int> > q;
    int ar[1005][1005];
    int visit[1005][1005];
    pair<int,int> sao[1005];
    int plusr[]={1,0,-1,0};
    int plusc[]={0,-1,0,1};
    int highr=0;
    int highc=0;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        int q,w;
        scanf("%d %d",&q,&w);
        sao[a]={q,w};
        ar[q][w]++;
        if(q>highr){
            highr=q;
        }
        if(w>highc){
            highc=w;
        }
    }
    for(int a=1;a<=m;a++){
        int str,stc;
        scanf("%d %d",&str,&stc);
        int chua;
        scanf("%d",&chua);
        int wantr,wantc;
        wantr=sao[chua].first;
        wantc=sao[chua].second;
        int cnt=ar[str][stc];
        visit[str][stc]=1;
        q.push({str,stc});
        bool jue=false;
        memset(visit,0,sizeof(visit));
        while(!q.empty()){
            int rn=q.front().first;
            int cn=q.front().second;
            for(int b=0;b<=3;b++){
                int nowr=rn+plusr[b];
                int nowc=cn+plusc[b];
                if(nowr < 0 || nowc < 0 || nowr > 1000 || nowc > 1000){
                    break;
                }
                if(visit[nowr][nowc]==1){
                    continue;
                }
                //printf("%d %d\n",nowr,nowc);
                visit[nowr][nowc]=1;
                cnt+=ar[nowr][nowc];
                if(nowr==wantr && nowc == wantc){
                    jue=true;
                }
                if(jue==false){
                q.push({nowr,nowc});
                }
            }
            q.pop();
        }
        printf("%d\n",cnt);
    }

return 0;}
