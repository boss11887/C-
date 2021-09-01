#include <bits/stdc++.h>
using namespace std;
int ar[1005];
int head[1005];
vector<pair<int,pair<int,int> > > vec;
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);

}
int main(){
int n;
scanf("%d",&n);
for(int a=0;a<=n;a++){
    head[a]=a;
}
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    vec.push_back({chua,{0,a}});
}
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
for(int a=1;a<=n;a++){
    for(int b=a+1;b<=n;b++){
        vec.push_back({ar[a]+ar[b],{a,b}});
    }
}
sort(vec.begin(),vec.end());
long long total=0;
for(int a=0;a<vec.size();a++){
    int h1=vec[a].second.first;
    int h2=vec[a].second.second;
    int nak=vec[a].first;
    h1=findhead(h1);
    h2=findhead(h2);
    if(head[h1] != head[h2]){
        head[h1]=head[h2];
        total+=nak;
    }
}
printf("%lld",total);
return 0;}
