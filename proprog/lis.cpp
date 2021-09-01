#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
stack<int> stk;
int ar[100005];
int head[100005];
int main(){
    int a=1;
    while(scanf("%d",&ar[a]) != EOF){
    int aow=lower_bound(vec.begin(),vec.end(),make_pair(ar[a],0))-vec.begin();
    if(aow==vec.size()){
        vec.push_back({ar[a],a});
        if(aow != 0){
        head[a]=vec[aow-1].second;
        }else{
        head[a]=-1;
        }
    }else{
        vec[aow]={ar[a],a};
        head[a]=vec[aow-1].second;
    }
    //printf("==%d\n",head[a]);
    a++;
    //printf("==%d\n",head[a]);
    }
    printf("%d\n-\n",vec.size());
    int now=head[vec[vec.size()-1].second];
    stk.push(vec[vec.size()-1].first);
    while(now !=-1){
        stk.push(ar[now]);
        now=head[now];
    }
    while(!stk.empty()){
        printf("%d\n",stk.top());
        stk.pop();
    }
return 0;}
