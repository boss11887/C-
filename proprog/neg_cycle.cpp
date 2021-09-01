#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int > > vec;
int mindis[1005];

int main(){
int q;
scanf("%d",&q);
while(q--){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=m;a++){
        int from,go,w;
        scanf("%d %d %d",&from,&go,&w);
        vec.push_back({{from,go},w});
    }
    for(int a=0;a<n;a++){
        mindis[a]=1e9;
    }
    for(int a=1;a<n;a++){
        for(int b=0;b<m;b++){
            int from=vec[b].first.first;
            int go=vec[b].first.second;
            int nak=vec[b].second;
            if(mindis[from]+nak< mindis[go]){
                mindis[go]=mindis[from]+nak;
            }
        }
    }
    bool jue=false;
    for(int b=0;b<m;b++){
        int from=vec[b].first.first;
        int go=vec[b].first.second;
        int nak=vec[b].second;
        if(mindis[from]+nak< mindis[go]){
            mindis[go]=mindis[from]+nak;
            jue=true;
        }
    }
    if(jue==true){
        printf("possible\n");
    }else{
        printf("not possible\n");
    }
    vec.clear();
}

return 0;}
