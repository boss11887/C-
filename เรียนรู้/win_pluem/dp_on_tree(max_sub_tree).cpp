#include <bits/stdc++.h>
using namespace std;
vector<int> vec[200005];
int dp[200005][2];
void re(int now,int par){
    int high=0;
    for(int un : vec[now]){
        if(un==par){
            continue;
        }
        re(un,now);
        dp[now][0]+=max(dp[un][1],dp[un][0]);
        dp[now][1]+=max(dp[un][1],dp[un][0]);
        high=max(high,1+dp[un][0]-max(dp[un][1],dp[un][0]));
    }
    dp[now][1]+=high;

}
int n;
int main(){
    scanf("%d",&n);
    for(int a=1;a<n;a++){
        int from,go;
        scanf("%d %d",&from,&go);
        vec[from].push_back(go);
        vec[go].push_back(from);
    }
    re(1,-1);
    printf("%d",max(dp[1][1],dp[1][0]));
return 0;
}
