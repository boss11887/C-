#include <bits/stdc++.h>
using namespace std;
unordered_map<string,int> um;
char s[20000];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    vector<pair<int,int> > vec;
    int yao;
    scanf("%d",&yao);
    for(int a=1;a<yao;a++){
        int u,v;
        scanf("%d %d",&u,&v);
        if(u<v){
        vec.push_back({u,v});
        }else{
        vec.push_back({v,u});
        }
    }
    sort(vec.begin(),vec.end());
    for(int a=0;a<vec.size();a++){
        s[a]=vec[a].first*13+vec[a].second*11;
    }
    um[s]++;
}




for(int a=1;a<=m;a++){
    vector<pair<int,int> > vec;
    int yao;
    scanf("%d",&yao);
    for(int a=1;a<yao;a++){
        int u,v;
        scanf("%d %d",&u,&v);
        if(u<v){
        vec.push_back({u,v});
        }else{
        vec.push_back({v,u});
        }
    }
    sort(vec.begin(),vec.end());
    for(int a=0;a<vec.size();a++){
        s[a]=vec[a].first*13+vec[a].second*11;
    }
    printf("%d\n",um[s]);
}

return 0;}
