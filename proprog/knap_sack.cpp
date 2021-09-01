#include <bits/stdc++.h>
using namespace std;
int n;
int w[1005],val[1005];
int dp[35][1005];

int re(int nak,int pos){
    if(nak<0){
        return -1e9;
    }
    //printf("--%d %d\n",nak,pos);
    if(pos==n+1 || nak==0){
        return 0;
    }
    if(dp[nak][pos] != 0){
        //printf("====%d %d\n",nak,dp[nak][pos]);
        return dp[nak][pos];
    }
    //printf("%d %d\n",nak,pos);
    return dp[nak][pos]=max(re(nak-w[pos],pos+1)+val[pos],re(nak,pos+1));
}


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      for(int a=1;a<=n;a++){
        scanf("%d %d",&val[a],&w[a]);
      }
      int total=0;
      int bag;
      scanf("%d",&bag);
      for(int a=1;a<=bag;a++){
        int now;
        //memset(dp,0,sizeof(dp));
        scanf("%d",&now);
        //re(30,1);
        total+=re(now,1);
      }
      printf("%d\n",total);
      memset(dp,0,sizeof(dp));
    }
}
