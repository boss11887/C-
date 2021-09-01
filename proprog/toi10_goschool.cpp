#include <bits/stdc++.h>
long long ar[55][55];

int main(){
int n,m;
scanf("%d %d",&n,&m);
int dog;
scanf("%d",&dog);
for(int a=1;a<=dog;a++){
    int r,c;
    scanf("%d %d",&r,&c);
    ar[r][c]=-1;
}
ar[0][1]=1;
for(int a=1;a<=n;a++){
    for(int b=1;b<=m;b++){
        if(ar[a][b]!=-1){
            ar[a][b]=ar[a-1][b]+ar[a][b-1];
        }else{
            ar[a][b]=0;
        }
    }
}
printf("%lld",ar[n][m]);
return 0;}
