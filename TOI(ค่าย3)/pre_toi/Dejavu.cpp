#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
queue<int> aow;
vector<int> pos[100005];
int val[100005];
int head[100005];

int main(){
int n;
long long high=0;
int now=0;
int mh=0;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    val[a]=chua;
    int tua=upper_bound(vec.begin(),vec.end(),make_pair(chua,9000000))-vec.begin();
    pos[tua].push_back(chua);
    //printf("==%d\n",tua);
    if(tua==vec.size()){
        while(!aow.empty()){
            aow.pop();
        }
        aow.push(a);
        if(tua !=0){
            head[a]=vec[tua-1].second;
        }
        vec.push_back({chua,a});
    }else if(tua==vec.size()-1){
        aow.push(a);
        if(tua !=0){
            head[a]=vec[tua-1].second;
        }
        vec[tua]={chua,a};
    }else{
        if(tua !=0){
            head[a]=vec[tua-1].second;
        }
        vec[tua]={chua,a};
    }
}
while(!aow.empty()){
    //printf("%d\n",aow.front());
    int now=aow.front();
    long long ss=0;
    while(now != 0){
        ss+=val[now];
        now=head[now];
    }
    high=max(high,ss);
    aow.pop();
}
int last=2e9;
now=0;
high=0;
printf("%d ",vec.size());
for(int a=vec.size()-1;a>=0;a--){
    now=0;
    for(int b=0;b<pos[a].size();b++){
        if(pos[a][b] >= now && pos[a][b] <= last){
            now=pos[a][b];
        }
    }
    //printf("--%d--",now);
    high+=now;
    last=now;
}
printf("%lld",high);
return 0;}
/*
8
10 1 20 3 30 29 5 31
*/
