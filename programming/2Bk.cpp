#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int visit[1005][1005];
int ar[1005][1005];

int main(){
int n;
int str,stc,edr,edc;
scanf("%d",&n);
int cnt=0;
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        scanf("%d",&ar[a][b]);
        if(cnt == 0 && ar[a][b]==0){
            str=a;
            stc=b;
            cnt++;
        }
        if(cnt == 1 && ar[a][b]==0){
            edr=a;
            edc=b;
        }
    }
}
int plusr[]={1,0,-1,0};
int plusc[]={0,1,0,-1};
int low=0,high=1e6;
int rn=1;
while(low<=high){
    //memset(visit,0,sizeof(visit));
    bool jue=false;
    int mid=(low+high)/2;
    q.push({str,stc});
    while(!q.empty()){
        for(int c=0;c<=3;c++){
            int nowr=q.front().first+plusr[c];
            int nowc=q.front().second+plusc[c];
            if(nowr==0 || nowc==0 || nowr >n || nowc > n){
                continue;
            }
            if(visit[nowr][nowc]==rn){
                continue;
            }
            visit[nowr][nowc]=rn;
            if(nowr==edr && nowc == edc){
                jue=true;
                break;
            }
            if(ar[nowr][nowc] <=mid){
                //printf("%d %d %d=%d\n",nowr,nowc,ar[nowr][nowc],mid);
                q.push({nowr,nowc});
            }
        }
        if(jue==true){
            break;
        }
        q.pop();
    }
    while(!q.empty()){
        q.pop();
    }
    if(jue==true){
        high=mid-1;
    }else{
        low=mid+1;
    }
    rn++;
    //printf("%d\n",mid);
}
printf("%d",low);
return 0;}
