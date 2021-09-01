#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[55005];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    int go=u+1;
    vec[u].push_back({-v,go});
    vec[go].push_back({-v,u});
}
for(int a=1;a<=n;a++){
    vec[a].push_back({2000000,a});
    sort(vec[a].begin(),vec[a].end());
}
for(int a=1;a<=n;a++){
    int now=a;
    int pos=0;
    while(1){
    int val=vec[now][pos].first;
    int go=vec[now][pos].second;
    if(val==2000000){
        break;
    }
    //printf("%d**",val);
    int aow=upper_bound(vec[go].begin(),vec[go].end(),make_pair(val,2000000))-vec[go].begin();
    //printf("..%d..**%d**\n",go,vec[go][aow].first);
    now=go;
    pos=aow;
    }
    printf("%d\n",now);
}
return 0;}


/*
4 1
1 3
1 5
2 4
3 5
*/
