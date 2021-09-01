#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int ar[2005][2005];
char s[2005];
void dfs(int a,int b){

}
int main(){
int r,c;
scanf("%d %d",&r,&c);
for(int a=1;a<=r;a++){
    scanf("%s",s+1);
    for(int b=1;b<=c;b++){
        ar[a][b]=s[b]-'0';
    }
}

int cnt=0;
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        if(ar[a][b]==1){
            ar[a][b]=0;
            cnt++;
            q.push({a,b});
            while(!q.empty()){
                int plusa[]={-1,-1,-1,0,1,1,1,0};
                int plusb[]={-1,0,1,1,1,0,-1,-1};
                for(int e=0;e<=7;e++){
                int nxta=q.front().first+plusa[e];
                int nxtb=q.front().second+plusb[e];
                    if(ar[nxta][nxtb] ==1){
                        ar[nxta][nxtb]=0;
                        q.push({nxta,nxtb});
                    }
                }
                q.pop();
            }
        }
    }
}
printf("%d",cnt);
return 0;}

