#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec.push_back({u,1});
    vec.push_back({v,-1});
}
sort(vec.begin(),vec.end());
long long ruam=0;
long long ans=0;
for(int a=0;a<vec.size();a++){
    int now=vec[a].second;
    if(now==-1){
        if(ruam>=2){
            ans+=ruam-1;
        }
        ruam--;
    }else{
        ruam++;
    }
}
printf("%lld",ans);
return 0;}
