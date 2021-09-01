#include <cstdio>
int dp[2005][2];
int ar[55];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    dp[ar[a]][0]+=1;
}

for(int a=1;a<=n;a++){
    for(int b=80;b>=0;b--){
        if(dp[b][0]>=1 && b+ar[a] <=80){
            dp[b+ar[a]][1]+=dp[b][0];
        }
    }
}


int sum=0;
for(int a=0;a<=80;a++){
    sum+=dp[a][1];
    //printf("%d %d\n",a,dp[a][1]);
    if(sum>=m){
        printf("%d ",a);
        break;
    }
}


return 0;}
/*
5 10
1 1 1 1 1
*/
