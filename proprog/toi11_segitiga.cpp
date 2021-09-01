#pragma GCC optimize("Ofast")
#pragma target ("sse,sse2,sse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
int fh[3][3]={  {2,1,0},
            {2,1,1},
            {1,2,1} };


int dp[300][300][5];

int main(){
int n=20;
int tua;
char mc[300];
while(n--){
    scanf("%d %s",&tua,mc);
    memset(dp,0,sizeof(dp));
    for(int a=1;a<=tua;a++){
        dp[a][a][mc[a-1]-'0']=1;
    }
    for(int len=2;len<=tua;len++){
        for(int st=1,ed=len;ed<=tua;st++,ed++){
            for(int mid=st;mid<ed;mid++){
                for(int x=0;x<=2;x++){
                    for(int y=0;y<=2;y++){
                        if(dp[st][mid][x]&&dp[mid+1][ed][y]){
                            dp[st][ed][fh[x][y]]=1;
                            //printf("%d %d %d\n",st,ed,fh[x][y]);
                        }
                    }
                }
            }
        }
    }
    if(dp[1][tua][0]){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}

return 0;}
