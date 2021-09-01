#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
int head[10005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int main(){
int n;
scanf("%d",&n);

while(n--){
int edge,vertex;
int total=0;
scanf("%d %d",&edge,&vertex);
for(int a=1;a<=vertex;a++){
    int u,v,w;
    scanf("%d %d %d",&u,&v,&w);
    total+=w;
    vec.push_back({w,{u,v}});
}
for(int a=1;a<=edge;a++){
    head[a]=a;
}
int lob=0;
sort(vec.rbegin(),vec.rend());
for(int a=0;a<vec.size();a++){
    int nowu=vec[a].second.first;
    int nowv=vec[a].second.second;
    int ww=vec[a].first;
    int h1=findhead(nowu);
    int h2=findhead(nowv);
    if(h1 != h2){
        head[h1]=head[h2];
        lob+=ww;
    }
}
printf("%d\n",total-lob);
    vec.clear();
}
printf("0");
return 0;}
