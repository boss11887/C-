#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
    int ar[2005][2005];
    int visit[2005][2005];

int main(){
    char s[2005];
    gets(s);
    int r,c;
    sscanf(s,"%d %d",&r,&c);
    //printf("***%d %d\n",r,c);
    for(int a=0;a<r;a++){
    gets(s);
        for(int b=0;b<c;b++){
            ar[a][b]=s[b]-'0';
        }
    }
    int cnt=0;
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            if(ar[a][b]==0){
                continue;
            }
            if(visit[a][b] == 1){
                continue;
            }
            q.push({a,b});
            cnt++;
            int plusr[]={-1,-1,-1,0,0,1,1,1};
            int plusc[]={-1,0,1,-1,1,-1,0,1};
            //printf("--> %d %d\n",a,b);

            while(!q.empty()){
                for(int c=0;c<=7;c++){
                    int nowr=q.front().first+plusr[c];
                    int nowc=q.front().second+plusc[c];
                    if(nowr <0 || nowc < 0){
                        continue;
                    }
                    if(ar[nowr][nowc]==0){
                        continue;
                    }
                    if(visit[nowr][nowc] == 1){
                        continue;
                    }
                    visit[nowr][nowc]=1;
                    //printf("%d %d\n",nowr,nowc);
                    q.push({nowr,nowc});
                }
                q.pop();
            }
        }
    }
    printf("%d",cnt);
return 0;}
