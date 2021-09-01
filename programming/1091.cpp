#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
vector<int> vec[300005];


int main(){
int n;
scanf("%d",&n);
for(int a=1;a<n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    if(u < v){
        vec[u].push_back(v);
    }else{
        vec[v].push_back(u);
    }
}
int high=0;
for(int a=1;a<=150;a++){
    q.push({a,1});
    int cnt=0;
    while(!q.empty()){
        int now=q.front().first;
        int step=q.front().second;
        step++;
        for(int b=0;b<vec[now].size();b++){
            if(vec[now][b]>now){
                q.push({vec[now][b],step});
                if(step>high){
                    high=step;
                }
            }
        }
        q.pop();
    }
}
printf("%d",high);
return 0;}
