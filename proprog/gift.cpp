#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int> want;
vector<int> tua;
stack<int> stk;
pair<int,int> ar[100005];
int pv[100005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    ar[a]={u,-v};
}
sort(ar+1,ar+n+1);
for(int a=1;a<=n;a++){
    int t=upper_bound(vec.begin(),vec.end(),ar[a].second)-vec.begin();
    //printf("%d\n",t);
    if(t==vec.size()){
        if(!vec.empty()){
            pv[a]=want[vec.size()-1];
        }else{
            pv[a]=-1;
        }
        vec.push_back(ar[a].second);
        want.push_back(a);
    }else{
        vec[t]=ar[a].second;
        want[t]=a;
        if(t != 0){
            pv[a]=want[t-1];
        }else{
            pv[a]=-1;
        }
    }
}
/*
for(int a=1;a<=n;a++){
    printf("%d\n",pv[a]);
}
/*/
printf("%d\n",vec.size());
int go=want[want.size()-1];
//*
    while(go != -1){
        stk.push(go);
        go=pv[go];
    }
//*/
while(!stk.empty()){
    go=stk.top();
    stk.pop();
    printf("%d %d\n",ar[go].first,-ar[go].second);
}

return 0;}
