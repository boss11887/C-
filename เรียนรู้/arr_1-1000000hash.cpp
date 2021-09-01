#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int ar[1000006];

int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        int u,v;
        scanf("%d",&u);
        ar[a]=u;
        vec.push_back({u,a});
    }
    sort(vec.begin(),vec.end());
    for(int a=0;a<vec.size();a++){
        int tua=vec[a].second;
        ar[tua]=a+1;
    }
    for(int a=1;a<=n;a++){
        printf("%d ",ar[a]);
    }
return 0;}
