#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
queue<pair<int,int> > ww;
int ar[1005][1005];
int ans[1005][1005];
int visit[1005][1005];
int main(){
int row,col;
scanf("%d %d",&row,&col);
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        scanf("%d",&ar[a][b]);
    }
}
int plusr[]={0,-1,0,1};
int plusc[]={-1,0,1,0};
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        if(ar[a][b]==0){
            continue;
        }
        if(visit[a][b]==1){
            continue;
        }
        int cnt=0;
        q.push({a,b});
        while(!q.empty()){
            int nowr=q.front().first;
            int nowc=q.front().second;
            for(int c=0;c<=3;c++){
                int nr=nowr+plusr[c];
                int nc=nowc+plusc[c];
                if(nr < 0 || nc < 0 || nr >row || nc > col){
                    continue;
                }
                if(ar[nr][nc]==0){
                    continue;
                }
                if(visit[nr][nc]==1){
                continue;
                }
                visit[nr][nc]=1;
                if(ar[nr][nc]==2){
                    cnt++;
                }
                if(ar[nr][nc]==3){
                    ww.push({nr,nc});
                }
                q.push({nr,nc});
            }
            q.pop();
        }
        while(!ww.empty()){
            ans[ww.front().first][ww.front().second]=cnt;
            //printf("(%d-%d) %d\n",ww.front().first,ww.front().second,cnt);
            ww.pop();
        }
    }
}
int question;
scanf("%d",&question);
for(int a=1;a<=question;a++){
    int chuarow,chuacol;
    scanf("%d %d",&chuarow,&chuacol);
    printf("%d\n",ans[chuarow][chuacol]);
}
return 0;}

/*
10 13
0 1 3 3 0 0 2 0 1 3 0 2 1
0 1 1 1 0 3 1 0 1 0 1 0 3
2 1 2 1 1 3 1 0 0 0 1 0 1
0 0 2 1 2 0 0 1 2 3 0 0 1
1 0 0 1 1 3 0 3 0 3 0 1 1
1 3 0 0 0 2 0 0 1 2 0 1 0
1 0 0 3 0 1 1 0 1 2 0 1 2
0 1 2 2 0 3 1 2 0 1 1 0 1
1 3 3 0 0 1 0 1 0 1 0 1 3
0 0 2 1 0 1 2 0 0 0 0 2 3
10
1 3
1 10
2 13
10 13
9 2
9 13
1 4
3 6
5 10
8 6

*/
