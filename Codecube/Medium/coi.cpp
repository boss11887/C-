#include <bits/stdc++.h>
using namespace std;
queue<pair<pair<int,int>,pair<int,int> > > q;
char ar[505][505];
char ww[510];
int visit[505][505][1<<3];

int main(){
    int row,col;
    int str,stc,edr,edc;
    gets(ww);
    sscanf(ww,"%d %d",&row,&col);
    //printf("%d",row);
    for(int a=1;a<=row;a++){
        gets(ww);
        for(int b=1;b<=col;b++){
            ar[a][b]=ww[b-1];
            if(ar[a][b]=='S'){
                str=a;
                stc=b;
            }
            if(ar[a][b]=='E'){
                edr=a;
                edc=b;
            }
            //printf("%c",ar[a][b]);
        }
    }
q.push({{str,stc},{0,0}});
visit[str][stc][0]=1;
ar[str][stc]='.';
int plusr[]={0,-1,0,1};
int plusc[]={1,0,-1,0};
//printf("%d %d",str,stc);
while(!q.empty()){
    int nowr=q.front().first.first;
    int nowc=q.front().first.second;
    int nbit=q.front().second.first;
    int step=q.front().second.second;
    step++;
    q.pop();
    for(int a=0;a<=3;a++){
        int rr=nowr+plusr[a];
        int cc=nowc+plusc[a];
        int bit=nbit;
        int ans;
        if(rr == 0 || cc == 0 || rr >row || cc >col){
            continue;
        }
        if(visit[rr][cc][bit]==1){
            continue;
        }
        //printf("%d %d %d\n",rr,cc,bit);
        if(rr== edr && cc ==edc){
            printf("%d",step);
            return 0;
        }
        if(ar[rr][cc]=='J'){
            ans=bit&(1<<0);
            //printf("****%d",ans);
            if(ans){
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
            }
        }
        if(ar[rr][cc]=='B'){
            ans=bit&(1<<1);
            if(ans){
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
            }
        }
        if(ar[rr][cc]=='P'){
            ans=bit&(1<<2);
            if(ans){
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
            }
        }


        if(ar[rr][cc]=='j'){
            bit=bit|(1<<0);
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
        }
        if(ar[rr][cc]=='b'){
            bit=bit|(1<<1);
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
        }
        if(ar[rr][cc]=='p'){
            bit=bit|(1<<2);
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
        }
        if(ar[rr][cc]=='.'){
            visit[rr][cc][bit]=1;
            q.push({{rr,cc},{bit,step}});
        }
    }
}
printf("-1");
return 0;}
