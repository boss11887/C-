#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
int head[200005];
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}
int main(){
    int n,m;
    while(1){
    scanf("%d %d",&n,&m);
    if(n==0){
        break;
    }
    for(int a=0;a<n;a++){
        head[a]=a;
    }
    int sum=0;
    for(int a=1;a<=m;a++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec.push_back({w,{u,v}});
        sum+=w;
    }
    int total=0;
    sort(vec.begin(),vec.end());
    for(int a=0;a<vec.size();a++){
        int from=vec[a].second.first;
        int go=vec[a].second.second;
        int nak=vec[a].first;
        from=findhead(from);
        go=findhead(go);
        if(head[from] != head[go]){
            //printf("%d ",nak);
            total+=nak;
            head[from]=head[go];
        }
    }
    printf("%d\n",sum-total);
    vec.clear();
    }
return 0;}
