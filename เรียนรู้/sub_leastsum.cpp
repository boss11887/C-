#include <bits/stdc++.h>
using namespace std;
long long ar[100005];
int main(){
int n,m;
int go=0;
while(scanf("%d %d",&n,&m) !=EOF){
    queue<int> q;
    int go=0,low=1e8,cnt=1;
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    long long val=0;
    for(int a=1;a<=n;a++){
       val+=ar[a];
       q.push(ar[a]);
       while(val >=m){
            if(q.size()==low){
                cnt++;
            }
            low=min(low,(int)q.size());
            val-=q.front();
            q.pop();
       }
    }
    if(low!=1e8)
    printf("%d\n",low);
    else
    printf("0\n");
}

return 0;}
