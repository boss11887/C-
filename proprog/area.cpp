#include <bits/stdc++.h>
using namespace std;
int ar[105][105];

int main(){
int t;
scanf("%d",&t);
for(int qq=1;qq<=t;qq++){
    int n,m,p;
    int ans=-1,price=1e9;
    scanf("%d %d %d",&n,&m,&p);
    for(int a=1;a<=n;a++){
        for(int b=1;b<=m;b++){
            scanf("%d",&ar[a][b]);
            ar[a][b]+=ar[a][b-1];
        }
    }
    for(int len=1;len<=m;len++){
        for(int st=0,ed=len;ed<=m;st++,ed++){
            int now=0,nr=0;
            for(int rr=1;rr<=n;rr++){
                now+=ar[rr][ed]-ar[rr][st];
                while(now>p){
                    nr++;
                    now-=ar[nr][ed]-ar[nr][st];

                }
                int area=len*(rr-nr);
                //printf("%d %d %d==%d,%d\n",st,ed,rr,now,area);
                if(area>ans){
                    ans=area;
                    price=now;
                }else if(area == ans && now < price){
                    price=now;
                }
            }
        }
    }
    printf("Case #%d: %d %d\n",qq,ans,price);
}


return 0;}
