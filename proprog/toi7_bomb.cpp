#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;
vector<pair<int,int> > vec;
int fenwick[1000005];
int n;


int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec.push_back({u,-v});
}
sort(vec.rbegin(),vec.rend());
int high=0;
for(int a=0;a<vec.size();a++){
    if(-vec[a].second >= high ){
        high=-vec[a].second;
        printf("%d %d\n",vec[a].first,-vec[a].second);
    }
}
return 0;}
