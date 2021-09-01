#include <bits/stdc++.h>
using namespace std;
int ar[260][260];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        scanf("%d",&ar[a][b]);
    }
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        for(int c=1;c<=n;c++){
            ar[b][c]=min(ar[b][c],ar[b][a]+ar[a][c]);
        }
    }
}
/*for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}*/
int q;
scanf("%d",&q);
for(int a=1;a<=q;a++){
    int st,md,ed;
    scanf("%d %d %d",&st,&md,&ed);
    st++;
    md++;
    ed++;
    printf("%d %d\n",ar[st][md]+ar[md][ed],ar[st][md]+ar[md][ed]-ar[st][ed]);
}

return 0;}
