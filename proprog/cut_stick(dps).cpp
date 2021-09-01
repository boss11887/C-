#include <bits/stdc++.h>
using namespace std;
int ar[1005];
int mindis[1005][1005];
int stk;
int n;

int dp(int a,int b){
    if(a+1==b){
        return 0;
    }
    if(mindis[a][b] != 1e8){
        return mindis[a][b];
    }
    for(int e=a+1;e<b;e++){
        mindis[a][b]=min(mindis[a][b],dp(a,e) + dp(e,b) + (ar[b]-ar[a]));
    }
    return mindis[a][b];
}

int main(){
while(1){
scanf("%d",&stk);
    if(stk==0){
        break;
    }
scanf("%d",&n);
    ar[0]=0;
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
    ar[n+1]=stk;
    for(int a=0;a<=n+1;a++){
        for(int b=0;b<=n+1;b++){
            mindis[a][b]=1e8;
        }
    }
printf("The minimum cutting is %d.\n",dp(0,n+1));
}
return 0;}
