#include <bits/stdc++.h>
using namespace std;
int dp[55][55];
int yao,tee,ar[55];

int re(int s,int f){
    if(dp[s][f] != 1e8){
        return dp[s][f];
    }
    int val= ar[f]-ar[s];
    dp[s][f]=val;
    dp[s][f]=min(dp[s][f],re(f,s-1)+re(s-1,s));
    return dp[s][f];

}

int main(){
while(1){
scanf("%d",&yao);
if(yao ==0){
    break;
}
scanf("%d",&tee);
for(int a=1;a<=tee;a++){
    scanf("%d",&ar[a]);
}
ar[tee+1]=yao;
ar[0]=0;
for(int a=0;a<=tee+1;a++){
    for(int b=0;b<=tee+1;b++){
        dp[a][b]=1e8;
    }
}
printf("%d",re(0,tee+1));
}
return 0;}
