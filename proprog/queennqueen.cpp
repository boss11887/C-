#include <bits/stdc++.h>
using namespace std;
int ar[16][16];
char s[20];
int cnt=0;
int n;
void samerow(int r,int c,int val){
    if(r==n+1){
        return;
    }
    ar[r][c]+=val;
    samerow(r+1,c,val);
    return;
}

void delrow(int r,int c,int val){
    if(r==n+1){
        return ;
    }
    ar[r][c]-=val;
    delrow(r+1,c,val);
    return;
}

void change(int r,int c,int val){
    if(r==n+1 || c==n+1){
        return ;
    }
    ar[r][c]+=val;
    change(r+1,c+1,val);
    return;
}

void delchange(int r,int c,int val){
    if(r==n+1 || c==n+1){
        return ;
    }
    ar[r][c]-=val;
    delchange(r+1,c+1,val);
    return;
}

void rchange(int r,int c,int val){
    if(r==n+1 || c==0){
        return ;
    }
    ar[r][c]+=val;
    rchange(r+1,c-1,val);
    return;
}

void delrchange(int r,int c,int val){
    if(r==n+1 || c==0){
        return ;
    }
    ar[r][c]-=val;
    delrchange(r+1,c-1,val);
    return;
}

void dfs(int r){
    if(r==n+1){
        /*
        for(int a=1;a<=n;a++){
            for(int b=1;b<=n;b++){
                printf("%d ",ar[a][b]);
            }
            printf("\n");
        }
        system("pause");
        */
        cnt++;
        return;
    }
    for(int c=1;c<=n;c++){
        if(ar[r][c]==0){
            samerow(r,c,r);
            change(r,c,r);
            rchange(r,c,r);
            /*
            for(int a=1;a<=n;a++){
                for(int b=1;b<=n;b++){
                    printf("%d ",ar[a][b]);
                }
                    printf("\n");
            }
            system("pause");
            //*/
            dfs(r+1);
            delchange(r,c,r);
            delrchange(r,c,r);
            delrow(r,c,r);
        }
    }

    return;
}

int main(){
    int nub=0;
while(scanf("%d",&n)&& n!=0){
    cnt=0;
    nub++;
for(int a=1;a<=n;a++){
    scanf("%s",s);
    for(int b=0;s[b] != '\0';b++){
        if(s[b]=='*'){
            ar[a][b+1]=ar[a][b+1]|(1<<17);
            //printf("%d %d %d",a,b+1,ar[a][b+1]);
        }
    }
}
    dfs(1);
    printf("Case %d: %d\n",nub,cnt);
    memset(ar,0,sizeof(ar));
}
return 0;}

/*
5
...*.
.*...
.....
.....
....*
*/
