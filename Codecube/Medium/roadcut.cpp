#include <bits/stdc++.h>
using namespace std;
int far[105][105];
int sar[105][105];
int fr[105];
int fc[105];
int sr[105];
int sc[105];

int main(){
int row,col;
scanf("%d %d",&row,&col);
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        scanf("%d",&far[a][b]);
        fr[a]+=far[a][b];
        fc[b]+=far[a][b];
    }
}
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        scanf("%d",&sar[a][b]);
        sr[a]+=sar[a][b];
        sc[b]+=sar[a][b];
    }
}
int high=0;
for(int a=1;a<=row;a++){
    int now=sr[a-1]+sr[a+1];
    for(int b=1;b<=row;b++){
        if(a==b){
            continue;
        }
        now+=fr[b];
    }
    if(now>high){
        high=now;
    }
}
for(int a=1;a<=col;a++){
    int now=sc[a-1]+sc[a+1];
    for(int b=1;b<=col;b++){
        if(a==b){
            continue;
        }
        now+=fc[b];
    }
    if(now>high){
        high=now;
    }
}
printf("%d",high);
return 0;}
