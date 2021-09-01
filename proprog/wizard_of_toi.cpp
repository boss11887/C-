#include <bits/stdc++.h>
using namespace std;

struct hhh{

size_t operator()(const pair<int,int>&a)const{
    return a.first+a.second;
}
};
unordered_map<pair<int,int>,pair<int,int>,hhh > m;


pair<int,int> ar1[1505],ar2[1505],ar3[1505],ar4[1505];
int main(){
int bossr,bossc;
scanf("%d %d",&bossr,&bossc);
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar1[a].first,&ar1[a].second);
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar2[a].first,&ar2[a].second);
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar3[a].first,&ar3[a].second);
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar4[a].first,&ar4[a].second);
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        int calr=ar1[a].first+ar2[b].first;
        int calc=ar1[a].second+ar2[b].second;
        m[{calr,calc}]={a,b};
    }
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        int calr=ar3[a].first+ar4[b].first;
        int calc=ar3[a].second+ar4[b].second;
        int ansr=bossr-calr;
        int ansc=bossc-calc;
        if(m.find({ansr,ansc}) != m.end()){
            auto want=m[{ansr,ansc}];
            printf("%d %d\n",ar1[want.first].first,ar1[want.first].second);
            printf("%d %d\n",ar2[want.second].first,ar2[want.second].second);
            printf("%d %d\n",ar3[a].first,ar3[a].second);
            printf("%d %d\n",ar4[b].first,ar4[b].second);
            return 0;
        }
    }
}
}
