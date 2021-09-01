#include <bits/stdc++.h>
using namespace std;
pair<int,int> ar[15000];
vector<int> vec;
int use[15005];

int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d %d",&ar[a].first,&ar[a].second);
}
use[1]=1;
int cnt=0;
while(cnt < n){
    int low=1e8;

for(int now=1;now<=n;now++){
    if(use[now]==1){
    int nowr=ar[now].first;
    int nowc=ar[now].second;
    use[now]=1;
    int pos;
    for(int a=1;a<=n;a++){
        if(use[a]==0){
            continue;
        }
        int cal=abs(ar[a].first-nowr)+abs(ar[a].second-nowc);
        if(cal < low){
            low=cal;
            pos=a;
        }
    }
    if(low!=1e8){
    vec.push_back(low);
    use[pos]=1;
    printf("%d\n",low);
    cnt++;
    }
    }
}
}
int ans=0;
sort(vec.begin(),vec.end());
int ee=vec.size()-m;
for(int a=0;a<=ee;a++){
    ans+=vec[a];
}
printf("%d",ans);
return 0;}
/*
5 1
2 9
9 7
14 2
12 9
16 4
*/
