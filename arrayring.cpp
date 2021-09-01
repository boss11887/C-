#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;
int sum[10005];
int main(){
    int n;
    scanf("%d",&n);
    n=n/2;
    int row=n;
    int col=n;
    for(int a=-n;a<=n;a++){
        for(int b=-n;b<=n;b++){
            int chua;
            //printf("%d %d\n",a,b);
            scanf("%d",&chua);
            int high=max(abs(a),abs(b));
            sum[high]+=chua;
        }
    }
    for(int a=0;a<=n;a++){
        printf("%d\n",sum[a]);
    }
return 0;}
