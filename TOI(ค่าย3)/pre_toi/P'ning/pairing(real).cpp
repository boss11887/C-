#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;
int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
int fr[1005],ans[1005];

for(int a=1;a<=x;a++){
    scanf("%d",&fr[a]);
}
int chua;
for(int a=1;a<=y;a++){
    scanf("%d",&chua);
    um[chua]=1;
}
for(int a=1;a<=z;a++){
    scanf("%d",&ans[a]);
}
int cnt=0;

for(int a=1;a<=z;a++){
    for(int b=1;b<=x;b++){
        int cal=ans[a]-fr[b];
        if(um[cal]==1){
            cnt++;
            break;
            //printf("%d %d\n",ans[a],fr[b]);
        }
    }
}
printf("%d",cnt);
return 0;}
