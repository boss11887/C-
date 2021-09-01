#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int> > vec;
queue<pair<int,int> > q;

int mindis[105];
int n;

int main(){
while(1){
scanf("%d",&n);
if(n==-1){
    break;
}
for(int a=1;a<=n;a++){
    mindis[a]=-1e8;
    int val,con;
    scanf("%d %d",&val,&con);
    for(int b=1;b<=con;b++){
        int chua;
        scanf("%d",&chua);
        //printf("%d->%d ",a,chua);
        vec.push_back({{a,chua},val});
    }
}
mindis[1]=100;
bool jue=false;
for(int a=1;a<=n*10;a++){
    for(int b=0;b<vec.size();b++){
        int from=vec[b].first.first;
        int go=vec[b].first.second;
        int w=vec[b].second;
        //printf("%d ",mindis[go]);
        if(mindis[from]+w > mindis[go]){
            mindis[go]=mindis[from]+w;
        }
        //printf("%d=%d ",go,mindis[go]);
    }
    //printf("\n");
    //printf("%d ",mindis[n]);
    if(mindis[n]<1e7 && mindis[n]>0){
        jue=true;
    }
}

if(jue==true){
    printf("winnable\n");
}else{
    printf("hopeless\n");
}
vec.clear();
}


return 0;}

