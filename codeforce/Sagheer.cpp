#include <bits/stdc++.h>
#define int long long
using namespace std;
int ar[100005];
vector<long long > vec;

main(){
    int n,m;
    int ans;
    scanf("%lld %lld",&n,&m);
    for(int a=1;a<=n;a++){
        scanf("%lld",&ar[a]);
    }
    int mid;
    long long jado=0,now=0;
    long long tt=0;
    int low=0,high=n;
    while(low<=high){
        mid=(low+high)/2;
        long long cal;
        for(int a=1;a<=n;a++){
            cal=(long long)ar[a]+(long long)a*(long long)mid;
            //printf("%d %d %d = %lld\n",ar[a],a,mid,cal);
            vec.push_back(cal);
        }
        now=m;
        int cnt=0;
        sort(vec.begin(),vec.end());
        for(int a=0;a<n;a++){
            //printf("%d ",vec[a]);
            if(now-vec[a]>=0){
                now-=vec[a];
                cnt++;
            }
            if(tt+vec[a]<=m){
                tt+=vec[a];
            }
        }
        //printf("\n",now);
        if(cnt<mid){
            high=mid-1;
        }else{
            ans=mid;
            low=mid+1;
        }
        vec.clear();
    }


    mid=ans;
    long long qwerty=0;
for(int a=1;a<=n;a++){
    long long cal=(long long)ar[a]+(long long)a*(long long)mid;
            //printf("%d %d %d = %lld\n",ar[a],a,mid,cal);
    vec.push_back(cal);
}
        now=m;
        sort(vec.begin(),vec.end());
            //printf("%d ",vec[a]);
            for(int b=0;b<ans;b++){
                qwerty+=vec[b];
            }


    printf("%lld %lld",ans,qwerty);
return 0;}
