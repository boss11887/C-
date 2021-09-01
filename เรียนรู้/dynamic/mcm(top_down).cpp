#include <bits/stdc++.h>
using namespace std;
int ar[1000];
int mindis[1005][1005];

int mcm(int st,int ed){
    if(st+1==ed){
        return 0;
    }
    if(mindis[st][ed] != 1e8){
        return mindis[st][ed];
    }
    for(int a=st+1;a<ed;a++){
        mindis[st][ed]=min(mindis[st][ed],mcm(st,a)+mcm(a,ed) + ar[st]*ar[a]*ar[ed]);
        //printf("%d\n",mindis[st][ed]);
    }
    return mindis[st][ed];
}

int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            mindis[a][b]=1e8;
        }
    }
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    printf("--%d",mcm(1,n));
return 0;}

/*
4
10 30 5 60

*/
