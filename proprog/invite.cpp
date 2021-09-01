#include <bits/stdc++.h>
using namespace std;
vector<int> vec[6005];
int ar[6005];
int dp[6005][3];

void dfs(int now,int from){
    //sum=0;
    //printf("%d %d\n",now,vec[now].size());
    for(int a=0;a<vec[now].size();a++){
        if(vec[now][a]==from){
            continue;
        }
        dfs(vec[now][a],now);
        //printf("==%d",vec[now][a]);
        dp[now][0]+=max(dp[vec[now][a]][0],dp[vec[now][a]][1]);
        dp[now][1]+=dp[vec[now][a]][0];
    }
    dp[now][1]+=ar[now];
}
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
while(1){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0){
        break;
    }
    vec[x].push_back(y);
    vec[y].push_back(x);
}
dfs(1,0);
printf("%d",max(dp[1][0],dp[1][1]));
return 0;}
