#include <bits/stdc++.h>
using namespace std;
queue<pair<int,pair<int,int> > > q;
queue<pair<int,pair<int,int> > > q2;
int ar[55][55];
int visit[55][55];

int main(){
int r,c;
char s[1005];
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    scanf("%s",s+1);
    for(int b=1;b<=c;b++){
        if(s[b]=='D'){
            ar[a][b]=-100;
        }else if(s[b]=='S'){
            q2.push({0,{a,b}});
        }else if(s[b]=='*'){
            ar[a][b]=0;
            q.push({0,{a,b}});
        }else{
            ar[a][b]=1e8;
        }
        if(s[b]=='X'){
            ar[a][b]=-111;
        }
    }
}
/*
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}
*/

    int plusr[]={1,0,-1,0};
    int plusc[]={0,1,0,-1};
while(!q.empty()){
    int nowr=q.front().second.first;
    int nowc=q.front().second.second;
    int nak=q.front().first;
    nak++;
    q.pop();
    for(int c=0;c<=3;c++){
        int rr=nowr+plusr[c];
        int cc=nowc+plusc[c];
        if(ar[rr][cc]==1e8){
            q.push({nak,{rr,cc}});
            ar[rr][cc]=nak;
        }
    }
}
int ans=1e8;

while(!q2.empty()){
    //printf("///0");
    int nowr=q2.front().second.first;
    int nowc=q2.front().second.second;
    int nak=q2.front().first;
    nak++;
    q2.pop();
    for(int c=0;c<=3;c++){
        int rr=nowr+plusr[c];
        int cc=nowc+plusc[c];
        if(ar[rr][cc]==0){
            continue;
        }
        if(ar[rr][cc]==-100){
            ans=nak;
            printf("%d",ans);
            return 0;
        }
        if(nak >= ar[rr][cc]){
            continue;
        }
        if(visit[rr][cc]==1){
            continue;
        }
        visit[rr][cc]=1;
        //printf("%d %d\n",rr,cc);
        q2.push({nak,{rr,cc}});
    }
}
printf("KAKTUS");
/*
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        printf("%d ",ar[a][b]);
    }
    printf("\n");
}
*/
return 0;}

