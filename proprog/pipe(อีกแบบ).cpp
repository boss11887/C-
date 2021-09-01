#include <bits/stdc++.h>
using namespace std;
int ar[1000005];
int ep[1000005];

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,h;
        memset(ep,0,sizeof(ep));
        memset(ar,0,sizeof(ar));
        scanf("%d %d",&n,&h);
        for(int a=1;a<=n;a++){
            int u,v;
            scanf("%d %d",&u,&v);
            ep[u]--;
            ep[v+1]++;
        }
        ar[0]=n+ep[0];
        for(int a=1;a<n;a++){
            ar[a]=ar[a-1]+ep[a];
            //printf("%d\n",ar[a]);
        }
        long long low=2e13;
        long long now=0;
        for(int a=0;a<n;a++){
            now+=ar[a];
            if(a>=h){
                now-=ar[a-h];
                low=min(low,now);
            }else if(a==h-1){
                low=min(low,now);
            }
        }
        printf("%lld\n",low);
    }
}
/*
2
5 4
0 0
0 0
0 0
0 0
0 0
*/
