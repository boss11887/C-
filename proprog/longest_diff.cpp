#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n;
scanf("%d",&t);
while(t--){
    queue<int> q;
    int high=0;
    scanf("%d",&n);
    unordered_map<int,int> um;
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        if(um[chua]==1){
            um[chua]=1;
            high=max(high,(int)q.size());
            while(q.front() != chua && !q.empty()){
                um[q.front()]=0;
                q.pop();
            }
            if(!q.empty()){
            q.pop();
            }
            q.push(chua);
        }else{
            um[chua]=1;
            q.push(chua);
        }
    }
    printf("%d\n",max(high,(int)q.size()));

}

return 0;}
