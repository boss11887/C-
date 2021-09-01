#include <bits/stdc++.h>
using namespace std;
int ar[20],dp[20];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
for(int a=1;a<=n;a++){
    dp[a]=1;
    for(int b=1;b<a;b++){
        if(ar[b]<ar[a]){
            dp[a]=max(dp[a],dp[b]+1);
        }
    }
    printf("%d",dp[a]);
}
printf("%d",dp[n]);
return 0;}

/*
10
1 6 2 2 4 3 1 4 1 5
*/
