#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
int ar[100005];
int yao[100005];
int f[100005];
int g[100005];
int head[1000005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}
int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    head[a]=a;
    scanf("%d",&ar[a]);
}
for(int b=1;b<=m;b++){
    scanf("%d %d",&f[b],&g[b]);
}
for(int b=1;b<=m;b++){
    int one=f[b];
    int two=g[b];
    vec.push_back({ar[one]+ar[two],{one,two}});
}
sort(vec.rbegin(),vec.rend());
int sum=0;
for(int a=0;a<vec.size();a++){
    int u=vec[a].second.first;
    int v=vec[a].second.second;
    int nak=vec[a].first;
    int h1=findhead(u);
    int h2=findhead(v);
    if(head[h1] != head[h2]){
        head[h1]=head[h2];
        yao[u]++;
        yao[v]++;
    }
}
for(int a=1;a<=n;a++){
    //printf("%d %d\n",yao[a],ar[a]);
    sum+=yao[a]*ar[a];
}
printf("%d",sum);
return 0;}
