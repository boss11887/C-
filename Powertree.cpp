#include <bits/stdc++.h>
using namespace std;
pair<int,int> tree[50005];
int power[50005];
int maiaow[50005];
int dfs(int a){
    if(a==0){
        return 0;
    }
    int gol=tree[a].first;
    int gor=tree[a].second;
    //printf("%d %d\n",gol,gor);
    return dfs(gol)+dfs(gor)+power[gol]+power[gor];
}

void del(int a){
    if(a==0){
        return;
    }
    int gol=tree[a].first;
    int gor=tree[a].second;
    //printf("%d %d\n",gol,gor);
    tree[a]={0,0};
    power[gol]=0;
    power[gor]=0;
    del(gol);
    del(gor);
}
int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    int u,v,w;
    scanf("%d %d %d",&u,&v,&w);
    tree[a]={v,w};
    power[a]=u;
}
for(int a=1;a<=m;a++){
    char s[10];
    int now;
    scanf("%s %d",s,&now);
    if(s[0]=='a'){
        printf("%d\n",dfs(now)+power[now]);
    }else if(s[0]=='d'){
        del(now);
        power[now]=0;
        tree[now]={0,0};
    }
}
return 0;}
/*
6 10
0 2 3
2 4 0
1 5 6
3 0 0
2 0 0
2 0 0
a 1
d 3
a 1
d 4
a 2
*/
