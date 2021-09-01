#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
char s[105],mc[105][105];

int main(){
int row,col;
while(1){
gets(s);
sscanf(s,"%d %d",&row,&col);
if(row==0){
    break;
}

for(int a=1;a<=row;a++){
    gets(s);
    for(int b=1;b<=col;b++){
        mc[a][b]=s[b-1];
    }
}
int nub=0;
q.push({1,1});
int plusr[]={1,0,-1,0};
int plusc[]={0,-1,0,1};
while(!q.empty()){
    int nowr=q.front().first;
    int nowc=q.front().second;
    for(int e=0;e<=3;e++){
        int gor=nowr+plusr[e];
        int goc=nowc+plusc[e];
        //printf("**%d %d",gor,goc);
        if(mc[gor][goc]=='\0' || mc[gor][goc]=='0'){
            continue;
        }
        if(mc[gor][goc]=='H'){
            nub++;
            continue;
        }
        if(mc[gor][goc]=='.'){
            mc[gor][goc]='0';
            q.push({gor,goc});
        }
    }
    q.pop();
}
memset(mc,0,sizeof(mc));
printf("%d\n",nub);
}
return 0;}

