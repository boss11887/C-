#include <bits/stdc++.h>
using namespace std;
int qs[1005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    qs[a]=qs[a-1]+chua;
    //printf("%d",qs[a]);
}
int low=1e8,ans1,ans2;
for(int b=1;b<=n-2;b++){
    for(int c=1+b;c<n;c++){
        int na[5];
        na[0]=qs[c-b]-qs[0];
        na[1]=qs[c]-qs[c-b];
        na[2]=qs[n]-qs[c];
        //printf("%d %d\n%d %d\n%d %d",c-b,0,c,c-b,n,c);
        //printf("\n\n");
        sort(na,na+3);
        //printf("%d %d %d\n",na[0],na[1],na[2]);
        int now=na[2]-na[0];
        now=abs(now);
        //printf("%d ",now);
        if(now<low){
            low=now;
            ans1=c-b+1;
            ans2=c+1;
        }
    }
}
printf("%d %d",ans1,ans2);


return 0;}
