#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int q;
        char s[10];
        scanf("%s",s);
        if(s[0]=='P'){
            scanf("%d",&q);
            pq.push(q);
        }else if(!pq.empty()){
            printf("%d\n",pq.top());
            pq.pop();
        }else{
            printf("-1\n");
        }
    }
return 0;}

