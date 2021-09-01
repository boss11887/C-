#include <bits/stdc++.h>
using namespace std;
int ar[505][505];

int main(){
int u=2;
while(u--){
int r,c;
scanf("%d %d",&r,&c);
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int wantr,wantc;
    scanf("%d %d",&wantr,&wantc);
    wantr++;
    wantc++;
    ar[wantr][wantc]=1;
}
for(int a=1;a<=r;a++){
    for(int b=1;b<=c;b++){
        ar[a][b]=ar[a][b]+ar[a-1][b]+ar[a][b-1]-ar[a-1][b-1];
        //printf("%d ",ar[a][b]);
    }
    //printf("\n");
}

int mps=min(r,c);
int del=mps;
int ans=mps;
bool jue=false;
int nsize;
for(nsize=1;nsize<=mps;nsize++){
    int rr=mps-nsize+1;
    int cc=mps-nsize+1;
    //printf("--%d %d--\n",nowr,nowc);
    for(int nowr=rr;nowhjyuyuuyuyr<=r;nowr++){
        for(int nowc=cc;nowc<=c;nowc++){
            int cal=ar[nowr][nowc]-ar[nowr-del][nowc]-ar[nowr][nowc-del]+ar[nowr-del][nowc-del];
            int oo=ar[nowr-1][nowc-1]-ar[nowr-del+1][nowc-1]-ar[nowr-1][nowc-del+1]+ar[nowr-del+1][nowc-del+1];
            int tt=cal-oo;
            //printf("(%d,%d) (%d,%d) -- (%d,%d) (%d,%d) = %d\n",nowr,nowc,nowr-del,nowc-del,nowr-1,nowc-1,nowr-del+1,nowc-del+1,tt);
            if(tt==0){
                jue=true;
                break;
            }
        }
        if(jue==true){
            break;
        }
    }
    ans--;
    if(jue==true){
        break;
    }
    del--;
}
printf("%d\n",ans+1);
memset(ar,0,sizeof(ar));
}
return 0;}
