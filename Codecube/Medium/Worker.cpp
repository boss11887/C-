#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int kon[1005];
int ar[1005];
int main(){
int low=1e9;
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    vec.push_back({chua,a});
}
for(int a=1;a<=n;a++){
    scanf("%d",&kon[a]);
    low=min(low,kon[a]);
}
for(int a=1;a<=n;a++){
    vec.push_back({kon[a]+low,a});
}
sort(vec.begin(),vec.end());
long long total=0;
for(int a=0;a<vec.size();a++){
    if(ar[vec[a].second]==0){
        ar[vec[a].second]=1;
        total+=vec[a].first;
        //printf("==%d(%d)==",vec[a].second,vec[a].first);
    }
}
printf("%lld",total);
return 0;}
