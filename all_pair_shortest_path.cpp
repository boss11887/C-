#include <bits/stdc++.h>
using namespace std;
int ar[255][255];

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
/*
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}
*/
int q;
scanf("%d",&q);
while(q--){
    int st,mid,ed;
    scanf("%d %d %d",&st,&mid,&ed);
    st++;
    mid++;
    ed++;
    printf("%d",ar[st][mid]+ar[mid][ed]);
    //if(ar[st][ed])
    printf(" %d\n",ar[st][mid]+ar[mid][ed]-ar[st][ed]);
}
return 0;}
