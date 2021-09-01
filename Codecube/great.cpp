#include <bits/stdc++.h>
using namespace std;
int ar[100005];
int event[200005];

int main(){
    int n,m,k;
    int low=0,high=-1e9;
    scanf("%d %d %d",&n,&m,&k);
    for(int a=1; a<=n;a++){
        scanf("%d",&ar[a]);
        high=max(ar[a],high);
    }
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        int cnt=0;
        long long use=0;
        int now=0;
        memset(event,0,sizeof(event));
        //printf("mid=%d ",mid);
        for(int a=1;a<=n;a++){
            int cal=ar[a]-mid;
            now+=event[a];
            //printf("%d ",cal);
            if(cal>0){
                if(cal >= now){
                    int dif=cal-now;
                    use+=dif;
                    //printf("dif=(%d) ",dif);
                    event[a]+=dif;
                    now+=dif;
                    event[a+m]-=dif;
                }
            }
            //printf("%d ",now);
        }
        //printf("==%d %d\n",mid,use);
        if(use > k){
            low=mid+1;
        }else{
            ans=mid;
            //printf("*");
            high=mid-1;
        }
        //printf("%d\n",use);
        //break;
        //printf("\n");
    }
    printf("%d",ans);
}
/*
5 5 1
1000000000 1000000000 1000000000 1000000000 1000000000
*/
