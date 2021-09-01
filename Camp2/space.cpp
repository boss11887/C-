#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int visit[1005][1005];
int ar[1005][1005];
char s[1005];
int plusr[]={1,0,-1,0};
int plusc[]={0,-1,0,1};

int main(){
    int row,col;
    int tri=0,sq=0,vsq=0;
    scanf("%d %d",&col,&row);
    for(int a=1;a<=row;a++){
        scanf("%s",s);
        for(int b=0;b<col;b++){
            ar[a][b+1]=s[b]-'0';
        }
    }
    int highr,lowr;
    int highc,lowc;
    //printf("*");
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            if(ar[a][b]==1&&visit[a][b]==0){
                q.push({a,b});
                highr=a;
                lowr=a;
                highc=b;
                lowc=b;
                while(!q.empty()){
                    //printf("*");
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
                        highr=max(highr,gor);
                        lowr=min(lowr,gor);
                        highc=max(highc,goc);
                        lowc=min(lowc,goc);
                        q.push({gor,goc});
                    }
                }
                if(ar[highr][highc]==1 && ar[highr][lowc]==1 && ar[lowr][highc]==1 && ar[lowr][lowc]==1){
                    sq++;
                    //printf("sq");
                }else if(ar[highr][highc]==0 && ar[highr][lowc]==0 && ar[lowr][highc]==0 && ar[lowr][lowc]==0){
                    vsq++;
                }else{
                    tri++;
                }
            }
        }
    }
    printf("%d %d %d",sq,vsq,tri);
return 0;}
