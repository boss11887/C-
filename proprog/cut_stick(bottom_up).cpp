#include <bits/stdc++.h>
using namespace std;
int ar[1010];
int dp[1010][1010];

int main(){
while(1){
int yao;
scanf("%d",&yao);
if(yao==0){
    break;
}
int n;
scanf("%d",&n);
for(int a=2;a<=n+1;a++){
    scanf("%d",&ar[a]);
}
ar[1]=0;
ar[n+2]=yao;
n+=2;
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        if(a+1==b){
            dp[a][b]=0;
        }else{
        dp[a][b]=1e9;
        }
    }
}
for(int len=3;len<=n;len++){
    for(int st=1,ed=len;ed<=n;st++,ed++){
        for(int mid=st+1;mid<ed;mid++){
            //printf("%d %d==%d\n",st,ed,dp[st][ed]);
            dp[st][ed]=min(ar[ed]-ar[st]+dp[st][mid]+dp[mid][ed],dp[st][ed]);
        }
    }
}
printf("The minimum cutting is %d.\n",dp[1][n]);
}
return 0;}
