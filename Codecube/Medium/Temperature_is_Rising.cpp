#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int ar[25][25];

int main(){
int n;
int str,stc;
scanf("%d %d %d",&n,&stc,&str);
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
        scanf("%d",&ar[a][b]);
    }
}
q.push({str,stc});
int high=ar[str][stc];
int plusr[]={1,0,-1,0};
int plusc[]={0,1,0,-1};
while(!q.empty()){
    int nowr=q.front().first;
    int nowc=q.front().second;
    for(int a=0;a<=3;a++){
        int gor=nowr+plusr[a];
        int goc=nowc+plusc[a];
        if(ar[gor][goc]==100){
            continue;
        }
        if(ar[gor][goc]> high ){
            high=ar[gor][goc];
        }
        if(ar[gor][goc] > ar[nowr][nowc]){
            q.push({gor,goc});
        }
    }
    q.pop();
}
printf("%d",high);
return 0;}
