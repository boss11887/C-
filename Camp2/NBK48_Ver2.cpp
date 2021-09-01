#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;
pair<int,int> qs[100005];

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    //-qs[0]={-2000000000,0};
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        qs[a]={chua+qs[a-1].first,a};
    }
    qs[0]={-2000000000,0};
    sort(qs,qs+n+1);
    int day=0;
    for(int a=1;a<=n;a++){
        day=max(day,qs[a].second);
        qs[a].second=day;
        //printf("%d %d--\n",qs[a].first,day);
        um[qs[a].first]=day;
    }
    qs[n+1]={2000000000,day};
    for(int a=1;a<=q;a++){
        int now;
        scanf("%d",&now);
        int val=lower_bound(qs,qs+n+2,make_pair(now,2000000000))-qs;
        //printf("*%d*",val);
        if(qs[val].first > now){
            //printf("%d",v)
            printf("%d\n",qs[val-1].second);
        }else{
            //printf("**%d**",qs[val].first);
            printf("%d\n",qs[val].second);
        }
        /*
        for(int b=n;b>=0;b--){
            //printf("%d ",qs[b]);
            if(now>=qs[b]){
                printf("%d\n",b);
                break;
            }
        }*/
    }
return 0;}
