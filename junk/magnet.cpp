#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
vector<pair<int,int> > ans;

int main(){
int n,m,q;
scanf("%d",&n);
for(int a=1;a<=m;a++){
    int from,go;
    scanf("%d %d",&from,&go)
    vec.push_back({from,1});
    vec.push_back({go,-1});
}
sort(vec.begin(),vec.end());
last=0;
int now=0;
for(int i=0;i < vec.size();i++){
    now+=vec[i].second;
    if(vec[i].first != last){

    }
}
return 0;}
