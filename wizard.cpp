#include <cstdio>
#include <unordered_map>
using namespace std;

struct hh{
    size_t operator()(const pair<int,int>&a)const
    {
        return a.first+a.second;
    }
};
unordered_map<pair<int,int>,pair<int,int> ,hh > um(3000000);
pair<int,int> ar1[1505],ar2[1505],ar3[1505],ar4[1505];


int main(){
int bossr,bossc;
scanf("%d %d",&bossr,&bossc);
int n,u,v;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&u,&v);
    ar1[a]={u,v};
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&u,&v);
    ar2[a]={u,v};
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&u,&v);
    ar3[a]={u,v};
}
for(int a=1;a<=n;a++){
    scanf("%d %d",&u,&v);
    ar4[a]={u,v};
}
for(int a=1;a<=n;++a){
    for(int b=1;b<=n;++b){
        int totalr=ar1[a].first+ar2[b].first;
        int totalc=ar1[a].second+ar2[b].second;
        um[{totalr,totalc}]={a,b};
        //printf("%d %d\n",totalr,totalc);
    }
}
for(int a=1;a<=n;++a){
    for(int b=1;b<=n;++b){
        int totalr=ar3[a].first+ar4[b].first;
        int totalc=ar3[a].second+ar4[b].second;
        int findr=bossr-totalr;
        int findc=bossc-totalc;
        //printf("%d %d\n",findr,findc);
        if(um[{findr,findc}].first != 0){
            int tf=um[{findr,findc}].first;
            int ts=um[{findr,findc}].second;
            printf("%d %d\n",ar1[tf].first,ar1[tf].second);
            printf("%d %d\n",ar2[ts].first,ar2[ts].second);
            printf("%d %d\n",ar3[a].first,ar3[a].second);
            printf("%d %d",ar4[b].first,ar4[b].second);
            return 0;
        }
    }
}
return 0;}
