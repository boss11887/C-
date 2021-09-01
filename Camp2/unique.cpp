#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;

int main(){
int n;
scanf("%d",&n);
int cnt=0;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    if(um[chua]==0){
        um[chua]=1;
        cnt++;
    }
}
printf("%d",cnt);

return 0;}
