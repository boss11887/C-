#include <bits/stdc++.h>
using namespace std;
unordered_map<int ,int> um;
int ar[100005];

int main(){
int n,k;
scanf("%d %d",&n,&k);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    ar[a]+=ar[a-1];
}
um[1]=1;
long long num=(long long)k;
while(num*(long long)k<=1e9){
    um[num]=1;
    num*=(long long)k;
    //printf("%lld\n",num);
}
int cnt=0;
for(int a=1;a<=n;a++){
    for(int b=a;b<=n;b++){
        int now=ar[b]-ar[a-1];
        //printf("%d %d\n",a,b);
        if(um[now]==1){
            cnt++;
            //printf("%d %d\n",a,b);
        }
    }
}
printf("%d",cnt);
return 0;}
