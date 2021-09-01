#include <bits/stdc++.h>
using namespace std;
queue<pair<int,pair<int,int> > > q;
unordered_map<int,vector<int> > um;
unordered_map<int,int> num;
unordered_map<int,int> mb;

int main(){
int n,k,step;
scanf("%d %d %d",&n,&k,&step);
for(int a=1;a<=k;a++){
    int f,s;
    scanf("%d %d",&f,&s);
    um[f].push_back(s);
}
int high=0;
int atl=1e7;
q.push({0,{0,0}});
while(!q.empty()){
    int now=q.front().second.first;
    int ns=q.front().second.second;
    int use=q.front().first;
    //printf("%d\n",now);
    if(now>high && ns <=step){
        high=now;
    }
    //printf("%d")
    if(now>=n){
        q.pop();
        if(ns < atl){
            atl=ns;
        }
        break;
        continue;
    }
    if(mb[step]==0){
        mb[step]=now;
    }else{
        if(now > mb[step]){
            q.pop();
            continue;
        }else{
            mb[step]=now;
        }
    }
    ns++;
    if(!um[now].empty()){
    /*if(now==9){
            printf("--%d",um[now][0]);
    }*/
        for(int b=0;b < um[now].size();b++){
        q.push({use,{um[now][b],ns}});
        }
            um[now].clear();
    }
    now+=1;
    q.push({use,{now,ns}});
    //printf("%d\n",ns);
    q.pop();
}
printf("%d\n",atl);
if(high < n){
printf("0 %d",high);
}else{
printf("1");
}
return 0;}
