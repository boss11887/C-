#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
queue<pair<int,int> > jue;
int ar[1005][1005];
int visit[1005][1005];
int ans[1005][1005];

int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
        scanf("%d",&ar[a][b]);
        }
    }
    int plusr[]={1,0,-1,0};
    int plusc[]={0,1,0,-1};
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            if(ar[a][b]==3 && visit[a][b]==0){
                q.push({a,b});
                visit[a][b]=1;
                jue.push({a,b});
                int nub=0;
                while(!q.empty()){
                    int nowr=q.front().first;
                    int nowc=q.front().second;
                    q.pop();
                    for(int e=0;e<=3;e++){
                        int gor=nowr+plusr[e];
                        int goc=nowc+plusc[e];
                        if(ar[gor][goc]==0){
                            continue;
                        }
                        if(visit[gor][goc]==1){
                            continue;
                        }
                        visit[gor][goc]=1;
                        if(ar[gor][goc]==3){
                            jue.push({gor,goc});
                        }
                        if(ar[gor][goc]==2){
                            nub++;
                        }
                        q.push({gor,goc});
                    }
                }
                while(!jue.empty()){
                    int mr=jue.front().first;
                    int mc=jue.front().second;
                    ans[mr][mc]=nub;
                    //printf("****%d %d %d\n",mr,mc,ans[mr][mc]);
                    jue.pop();
                }
            }
        }
    }
    int question;
    scanf("%d",&question);
    for(int a=1;a<=question;a++){
        int rrr,ccc;
        scanf("%d %d",&rrr,&ccc);
        printf("%d\n",ans[rrr][ccc]);
    }
return 0;}
