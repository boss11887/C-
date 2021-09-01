#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
float ans[100001],delay,tob[100001];
int n,speed;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int kon,dis;
    scanf("%d %d",&kon,&dis);
    for(int b=1;b<=kon;b++){
        scanf("%d %f",&speed,&delay);
        delay/=1000;
        ans[b]=dis/speed;
        ans[b]+=delay;
        tob[b]=ans[b];
        //printf("%f",ans[b]);
    }
    sort(ans+1,ans+kon+1);
    for(int w=1;w<=kon;w++){
        for(int e=kon;e>=1;e--){
        if(ans[w]==tob[e]){
            printf("%d\n",e);
            tob[e]=-1e6;
            break;
            }
        }
    }

}


return 0;}
