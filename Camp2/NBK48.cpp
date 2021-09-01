#include <bits/stdc++.h>
using namespace std;
int qs[100005];
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        qs[a]=chua+qs[a-1];
    }
    for(int a=1;a<=q;a++){
        int now;
        scanf("%d",&now);
        for(int b=n;b>=0;b--){
            //printf("%d ",qs[b]);
            if(now>=qs[b]){
                printf("%d\n",b);
                break;
            }
        }
    }
return 0;}
