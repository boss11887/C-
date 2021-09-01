#include <bits/stdc++.h>
using namespace std;
long long ar[2000005];
long long ans[2000005];
long long qs[2000005];

int main(){
    for(int a=1;a<=2000000;a++){
        int total=a;
        int even=0;
        int odd=0;
        while(total>0){
            int now=total%10;
            if(now%2 ==0){
                even+=now;
            }else{
                odd+=now;
            }
            total=total/10;
        }
        ar[a]=std::abs(even-odd);
        //printf("%d %d\n",a,ar[a]);
    }
    for(int a=1;a<=2000005;a++){
        qs[a]=qs[a-1]+ar[a];
    }
    int low=1,high=1;
    long long ts=0;
    long long nowqs=0;
    for(int a=1;a<=1000000;a++){
        ts+=ar[a+a];
        nowqs+=((qs[high]-qs[low])*2);
        ans[a]=ts+nowqs;
        //printf("%d---%d--%d\n",a,ar[a+a],(qs[high]-qs[low])*2);
        high+=2;
        low+=1;
    }
int t;
int n;
scanf("%d",&t);
for(int a=1;a<=t;a++){
    scanf("%d",&n);
    printf("%lld\n",ans[n]);
}


return 0;}


/*
5
1
2
3
4
5
*/
