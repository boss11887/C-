#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq[60];
int ar[200005];
int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    scanf("%d",&ar[a]);
}
for(int a=1;a<=m;a++){
    int use;
    scanf("%d",&use);
    pq[ar[a]].push(-use);
}
int q;
scanf("%d",&q);
while(q--){
    int from,go;
    scanf("%d %d",&from,&go);
    int low=-1e8,high=1e8;
    for(int a=from;a>=1;a--){
        if(!pq[a].empty()){
            low=a;
            break;
        }
    }
    for(int a=from;a<=n;a++){
        if(!pq[a].empty()){
            high=a;
            break;
        }
    }
    //printf("//%d %d//",high,low);
    int highpos=high-from;
    int lowpos=from-low;
    int aow;
    int dis;
    if(highpos <= lowpos){
        aow=high;
        dis=highpos;
    }else{
        aow=low;
        dis=lowpos;
    }
    //printf("%d %d\n",aow,dis);
    //printf("**%d**",aow);
    int diff=abs(from-aow);
    int diff2=abs(go-from);
    int ruam=diff+diff2;
    int gone=pq[aow].top();
    pq[aow].pop();
    gone=-gone;
    printf("%d %d\n",aow,gone);
    gone+=ruam;
    pq[go].push(-gone);
}
return 0;}
