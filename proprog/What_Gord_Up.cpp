#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int head[1000005];
int ar[10000005];
int pos[1000005];
int main(){
int chua;
int a=1;
while(scanf("%d",&chua) != EOF){
    ar[a]=chua;
    int tua=lower_bound(vec.begin(),vec.end(),chua)-vec.begin();
    if(tua==vec.size()){
        pos[a]=pos[tua];
        vec.push_back(chua);
    }else{
        pos[a]=pos[tua-1];
        vec[tua]=chua;
    }
    a++;
}
pos[1]=-1;
printf("%d\n-\n",vec.size());

for(int a=1;a<=8;a++){
    printf("%d\n",pos[a]);
}

return 0;}
