#include <bits/stdc++.h>
using namespace std;
int ar[10005];

int main(){
int q;
scanf("%d",&q);
while(q--){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    long long high=0;
    long long hpos=0;
    int st,ed,nowst;
    for(int a=1;a<=n;a++){
        hpos+=ar[a];
        if(hpos <= 0){
            hpos=0;
            nowst=a;
        }
        if(hpos > high){
            high=hpos;
            st=nowst;
            ed=a;
        }
    }
    long long low=0;
    long long lpos=0;
    for(int a=1;a<=n;a++){
        lpos+=ar[a];
        lpos=min(lpos,0ll);
        low=min(low,lpos);
    }
    printf("%d %d == %lld\n",st,ed,high-low);
}

return 0;}
