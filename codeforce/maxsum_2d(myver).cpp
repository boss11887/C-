#include <bits/stdc++.h>
using namespace std;
int qs[105][105];
int dp[105];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        scanf("%d",&qs[a][b]);
        qs[a][b]+=qs[a][b-1];
        //printf("*%d* ",qs[a][b]);
    }
    //printf("\n");
}
int ans=-1e9;
for(int a=0;a<n;a++){
    for(int b=a+1;b<=n;b++){
        for(int c=1;c<=n;c++){      ///row
            dp[c]=max(dp[c-1],0)+qs[c][b]-qs[c][a];
            ans=max(ans,dp[c]);
            //printf("%d %d %d==%d\n",a,b,c,dp[c]);
        }
    }
}
printf("%d\n",ans);
return 0;}

/*
4
0 -2 -7  0
9  2 -6  2
-4  1 -4  1
-1 8  0 -2
*/

