#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
int head[100005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}


int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int jud,road;
    int sum=0;
    scanf("%d %d",&jud,&road);
    for(int b=1;b<=road;b++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vec.push_back({w,{u,v}});
        sum+=w;
    }
    for(int b=1;b<=jud;b++){
        head[b]=b;
    }
    int total=0;
    sort(vec.begin(),vec.end());
    while(!vec.empty()){
        int nowu=vec.back().second.first;
        int nowv=vec.back().second.second;
        int cost=vec.back().first;
        int h1 = findhead(nowu);
        int h2 = findhead(nowv);
        if(h1 != h2){
            head[h1]=head[h2];
            total+=cost;
        }
        vec.pop_back();
    }
    printf("%d\n",sum-total);
}
scanf("%d",&n);
return 0;}
