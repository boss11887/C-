#include <bits/stdc++.h>
using namespace std;
int ar[605][605];
int qsr[605][605];
int qsc[605][605];
int high=0;

int main(){
int n,m;
scanf("%d %d",&n,&m);
memset(ar,-1,sizeof(ar));
for(int a=1;a<=n;a++){
    for(int b=1;b<=m;b++){
        scanf("%d",&ar[a][b]);
    }
}

for(int a=1;a<=n;a++){
    int now=1;
    for(int b=1;b<=m;b++){
        if(ar[a][b]==ar[a][b-1]){
            now++;
        }else{
            now=1;
        }
        qsr[a][b]=now;
    }
    now=1;
    /*
    for(int b=1;b<=m;b++){
        if(ar[b][a]==ar[b-1][a]){
            now++;
        }else{
            now=1;
        }
        qsr[b][a]=now;
    }
    */
}

for(int a=1;a<=m;a++){
    int now=1;
    for(int b=1;b<=m;b++){
        if(ar[b][a]==ar[b-1][a]){
            now++;
        }else{
            now=1;
        }
        qsc[b][a]=now;
    }
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=m;b++){
        //printf("%d ",qsr[a][b]);
        high=max(high,qsr[a][b]*qsc[a][b]);
    }
    //printf("\n");
}
printf("%d",high);
return 0;}
