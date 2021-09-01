#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um(9000005);
int ar[3005];

int main(){
int n;
long long m;
scanf("%d %lld",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
for(int a=1;a<=n;a++){
    for(int b=a+1;b<=n;b++){
        um[ar[a]+ar[b]]++;
    }
}
long long cnt=0;
for(int a=1;a<=n;a++){
    for(int b=a+1;b<=n;b++){
        um[ar[a]+ar[b]]--;
    }
     for(int b=1;b<a;b++){
        if(um[m-ar[a]-ar[b]]>0){
            cnt+=um[m-ar[a]-ar[b]];
        //um[m-ar[a]-ar[b]]--;
        }
    }
}
printf("%lld",cnt*24);
return 0;}
