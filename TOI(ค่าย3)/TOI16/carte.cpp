#include <bits/stdc++.h>
using namespace std;
int dp[450][450];


int main(){
int n,k;
scanf("%d %d",&n,&k);
while(n--){
    int now;
    scanf("%d",&now);
    int ar[405];
    for(int i=1;i<=now;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=1;i<=now;i++){
        dp[i][i]=1;
        if(ar[i]==ar[i+1]){
            dp[i][i+1]=1;
        }else{
            dp[i][i+1]=2;
        }
    }
}

}




