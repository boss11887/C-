#include <bits/stdc++.h>
using namespace std;
int qs[100005];

int main(){
    int n;
    scanf("%d",&n);
    //-qs[0]={-2000000000,0};
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        qs[a]=chua;
    }
    qs[0]=-2000000000;
    qs[n+1]=2000000000;
    sort(qs,qs+n+1);
    for(int a=0;a<=n;a++){
        printf("%d\n",qs[a]);
    }
    /*
    for(int a=1;a<=q;a++){
        int now;
        scanf("%d",&now);
        int val=lower_bound(qs,qs+n,make_pair(now,2000000000))-qs;
        //printf("*%d*",val);
        if(qs[val].first > now){
            //printf("%d",v)
            printf("%d\n",qs[val-1].second);
        }else{
            //printf("**%d**",qs[val].first);
            printf("%d\n",qs[val].second);
        }
        for(int b=n;b>=0;b--){
            //printf("%d ",qs[b]);
            if(now>=qs[b]){
                printf("%d\n",b);
                break;
            }
        }
    }*/
return 0;}
