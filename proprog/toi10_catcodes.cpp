#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,int> um(1000005);
char s[35];
char chk[1000005];
int visit[100005];

int main(){


int n,m;
long long fd=1;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%s",s);
    long long now=0;
    for(int b=0;b<m;b++){
        now*=2;
        now+=s[b]-48;
    }
    um[now]=a;
    //printf("%lld\n",now);
}
for(int b=0;b<m;b++){
        fd*=2;
}
int j;
scanf("%d",&j);
//printf("==%lld==",fd);
for(int a=1;a<=j;a++){
    int yao;
    bool jue=false;
    memset(visit,0,sizeof(visit));
    visit[0]=1;
    scanf("%d %s",&yao,chk);
    long long now=0;
    for(int b=0;b<yao;b++){
        now*=2;
        now+=chk[b]-48;
        if(b>=m){
            now=now-fd*(chk[b-m]-48);
        }
        //printf("%lld ",now);
        if(b>=m-1){
            if(visit[um[now]]==0){
                visit[um[now]]=1;
                jue=true;
            }
        }
    }
    //sort(vec.begin(),vec.end());
    if(jue){
    for(int a=1;a<=n;a++){
        if(visit[a]){
        printf("%d ",a);
        }
    }
    printf("\n");
    }else{
    printf("OK\n");
    }
}
return 0;}
