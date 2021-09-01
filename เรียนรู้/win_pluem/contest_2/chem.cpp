#include <bits/stdc++.h>
using namespace std;
unordered_map<int ,int> um;
unordered_map<int,int> use;
unordered_map<int,int> lt;
vector<int> vec;
int ar[100005];

int main(){
int n,k;
scanf("%d %d",&n,&k);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
um[1]=1;
long long num=(long long)k;
while(num*(long long)k<=1e9){
    um[num]=1;
    num*=(long long)k;
    //printf("%lld\n",num);
}
int cnt=0;
vec.push_back(0);
use[0]=1;
for(int a=1;a<=n;a++){
    //printf("============%d\n",a);
    for(int b=vec.size()-1;b>=0;b--){
        if(use[vec[b]+ar[a]]==0){
        vec.push_back(vec[b]+ar[a]);
        }
        use[vec[b]+ar[a]]++;
        //printf("%d %d\n",vec[b]+ar[a],use[vec[b]+ar[a]]);
    }
}
for(int b=vec.size()-1;b>=0;b--){
    if(um[vec[b]]==1){
        cnt+=use[vec[b]];
        printf("===%d %d\n",vec[b],use[vec[b]]);
        use[vec[b]]=0;
    }
}
printf("%d",cnt);
return 0;}

