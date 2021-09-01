#include <bits/stdc++.h>
using namespace std;
int ar[50005];
vector<pair<int,int> > vec;

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec.push_back({v,u});
}
for(int a=1;a<=n;a++){
    ar[a]=a;
}
sort(vec.begin(),vec.end());
for(int a=0;a<vec.size();a++){
    int h1=vec[a].second;
    int h2=h1+1;
    swap(ar[h1],ar[h2]);
}
for(int a=1;a<=n;a++){
    printf("%d\n",ar[a]);
}
return 0;}
