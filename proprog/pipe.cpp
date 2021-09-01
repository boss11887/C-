#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
pair<int,int> ar[15005];
int head[15005];
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}
int aow;
int main(){
int n,m;
scanf("%d %d",&n,&m);
aow=n-m;
//printf("/////%d",aow);
for(int a=1;a<=n;a++){
    int u,v;
    head[a]=a;
    scanf("%d %d",&u,&v);
    ar[a]={u,v};
}
for(int a=1;a<n;a++){
    for(int b=a+1;b<=n;b++){
        int nak=abs(ar[a].first-ar[b].first)+abs(ar[a].second-ar[b].second);
        vec.push_back({nak,{a,b}});
        //printf("%d %d %d\n",nak,a,b);
    }
}
int total=0,cnt=0;;
sort(vec.begin(),vec.end());
for(int a=0;a<vec.size();a++){
    int h1=vec[a].second.first;
    int h2=vec[a].second.second;
    int nak=vec[a].first;
    h1=findhead(h1);
    h2=findhead(h2);
    if(h1 != h2){
        head[h1]=h2;
        cnt++;
        total+=nak;
        //printf("%d\n",nak);
    }
    //printf("***%d",aow);
    if(cnt==aow){
        //printf("==%d",aow);
        break;
    }
}
printf("%d",total);
return 0;}
