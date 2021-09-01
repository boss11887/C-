#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int ar[1505][1505];
bool visit[1505][1505];
int tob[1505];
pair<pair<short,short>,pair<short,short> > ans[1505][1505];

int main(){
int r,c;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
    }
}
int ask;
scanf("%d",&ask);
int plusr[]={1,0,-1,0};
int plusc[]={0,-1,0,1};
int tua=3;
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        int highr=a,highc=b;
        int lowr=a,lowc=b;
        if(ar[a][b]==1 && visit[a][b]==0){
            ar[a][b]=1e8;
            int cnt=1;
            q.push({a,b});
            visit[a][b]=1;
            while(!q.empty()){
                int nowr=q.front().first;
                int nowc=q.front().second;
                for(int e=0;e<=3;e++){
                    int gor=nowr+plusr[e];
                    int goc=nowc+plusc[e];
                    if(gor < 0 || goc < 0 ){
                        continue;
                    }
                    if(ar[gor][goc]==0){
                        continue;
                    }
                    if(visit[gor][goc]==1){
                        continue;
                    }
                    visit[gor][goc]=1;
                    if(gor > highr){
                        highr=gor;
                    }
                    if(goc > highc){
                        highc=goc;
                    }
                    if(gor < lowr){
                        lowr=gor;
                    }
                    if(goc < lowc){
                        lowc=goc;
                    }
                    q.push({gor,goc});
                    ar[gor][goc]=1e8;
                    //printf("%d %d\n",gor,goc);
                    cnt++;
                }
                q.pop();
            }
            for(int i=lowr;i<=highr;i++){
                for(int j=lowc;j<=highc;j++){
                    if(ar[i][j]==1e8){
                        ar[i][j]=tua;
                        ans[i][j]={{lowr,lowc},{highr,highc}};
                        tob[tua]=cnt;
                    }
                }
            }
            tua++;
            //printf("(%d %d)%d %d---%d %d\n",a,b,lowr,lowc,highr,highc);
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
for(int a=1;a<=ask;a++){
    int wantr,wantc;
    scanf("%d %d",&wantr,&wantc);
    int lowr=ans[wantr][wantc].first.first;
    int lowc=ans[wantr][wantc].first.second;
    int highr=ans[wantr][wantc].second.first;
    int highc=ans[wantr][wantc].second.second;
    int want=ar[wantr][wantc];
    //printf("%d %d---%d %d\n",lowr,lowc,highr,highc);
    if(lowr != 0){
        printf("%d\n",tob[want]);
        for(int i=lowr;i<=highr;i++){
                for(int j=lowc;j<=highc;j++){
                    if(ar[i][j]==want){
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
    }else{
        printf("-\n");
    }
}
return 0;}
