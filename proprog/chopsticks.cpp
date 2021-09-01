#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int ar[100005];

int main(){
int n,m;
int cnt=0;
scanf("%d %d",&n,&m);

for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    vec.push_back(ar[a]);
}
sort(vec.begin(),vec.end());

int last=vec[0];
for(int a=1;a<vec.size();a++){
    if(vec[a]-last <= m){
        cnt++;
        a++;
        last=vec[a];
    }
    last=vec[a];
}
printf("%d",cnt);
return 0;}
