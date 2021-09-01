#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,pair<int,int> > > vec;
char country[6][2000];
int ar[5][5];
int point[5];
int sr[5];
int lose[5];
int main(){
for(int a=1;a<=4;a++){
    scanf("%s",country[a]);
    //printf("%s\n",country[a]);
}
for(int a=1;a<=4;a++){
    for(int b=1;b<=4;b++){
        scanf("%d",&ar[a][b]);
        sr[a]+=ar[a][b];
        lose[b]+=ar[a][b];
    }
}
for(int a=1;a<=4;a++){
    for(int b=a+1;b<=4;b++){
        if(ar[a][b]>ar[b][a]){
            point[a]+=3;
        }else if(ar[a][b]<ar[b][a]){
            point[b]+=3;
        }else{
            point[a]++;
            point[b]++;
        }
    }
}
for(int a=1;a<=4;a++){
//printf("%d",point[a]);
vec.push_back({{point[a],sr[a]-lose[a]},{sr[a],a}});
}
sort(vec.rbegin(),vec.rend());

for(int a=0;a<4;a++){
    int now=vec[a].second.second;
    printf("%s %d\n",country[now],point[now]);
}
return 0;}
