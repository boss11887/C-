#include <bits/stdc++.h>
using namespace std;
int hh[25][25];
int ar[105];
int dp[105][105][25];

int main(){
int k;
scanf("%d",&k);
for(int a=0;a<k;a++){
    for(int b=0;b<k;b++){
        scanf("%d",&hh[a][b]);
    }
}
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    dp[a][a][ar[a]]=1;
}
for(int len=2;len<=n;len++){
    for(int st=1,ed=len;ed<=n;st++,ed++){
        for(int mid=st;mid<ed;mid++){
            for(int x=0;x<k;x++){
                for(int y=0;y<k;y++){
                    if(dp[st][mid][x]>=1 && dp[mid+1][ed][y]>=1){
                        //printf("%d %d==%d %d->%d\n",st,ed,x,y,hh[x][y]);
                        dp[st][ed][hh[x][y]]+=dp[st][mid][x]*dp[mid+1][ed][y];
                        dp[st][ed][hh[x][y]]%=2009;
                    }
                }
            }
        }
    }
}
for(int a=0;a<k;a++){
    printf("%d\n",dp[1][n][a]);
}
return 0;}
