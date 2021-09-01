#include <bits/stdc++.h>
using namespace std;
long long fenwick[500005];
int n;

vector<pair<int,int> > vec;

void add(int now){
    while(now <=n){
        fenwick[now]++;
        now+=now&-now;
    }
}
int tt(int now){
    int ans=0;
    while(now > 0){
        //printf("*%d=%d*",now,fenwick[now]);
        ans+=fenwick[now];
        now-=now&-now;
    }
    return ans;
}
int main(){
while(1){
    scanf("%d",&n);
    if(n==0){
        break;
    }
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back({chua,a});
    }
    sort(vec.rbegin(),vec.rend());
    long long total=0;
    for(int a=0;a<n;a++){
        int now=vec[a].second;
        total+=tt(now);
        //printf("==%d(%d)==",tt(now),now);
        add(now);
    }
    memset(fenwick,0,sizeof(fenwick));
    printf("%lld\n",total);
    vec.clear();
}
return 0;}
