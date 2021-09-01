#include <bits/stdc++.h>
using namespace std;
vector<int> vec[2005];
vector<int> myvec;
int ar[2005][2005];
int cr[2005];
int use[6];

void rs(int z){
    for(int a=1;a<=4;a++){
        use[a]=0;
    }
}
int main(){
int n,m;
scanf("%d %d",&n,&m);
int low=1e8;
for(int a=1;a<=m;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    ar[u][v]=1;
    ar[v][u]=1;
    vec[u].push_back(v);
    vec[v].push_back(u);
    if(u<low)
        low=u;
    if(v<low)
        low=v;
}
cr[low]=1;
int bf=0;
rs(1);
for(int a=0;a < vec[low];a++){
    int nowpos = vec[low][a];

}

return 0;}
