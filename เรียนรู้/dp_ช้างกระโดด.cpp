#include <bits/stdc++.h>
using namespace std;
int ar[1005];
int dp[1005];
int n;
int total=0;
int re(int now){
    if(now > n){
        return 0;
    }
    return dp[now]=max(ar[now]+re(now+3),re(now+1));
}

int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
printf("%d",re(3));

return 0;}
