#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int> di[1000005];
int ar[1000005];
int visit[1000005];
int main(){
bool tum=false;
//freopen("ans.txt","w",stdout);
while(1){
    memset(ar,0,sizeof(ar));
int n;
int want;
scanf("%d",&n);
if(n==0){
    break;
}
if(tum){
    printf("\n");
}
tum=true;
int high=-1e9;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    //vec.push_back(chua);
    ar[chua]++;
    di[ar[chua]].push_back(chua);
    if(ar[chua]>high){
        high=ar[chua];
    }
}
//sort(vec.begin(),vec.end());
int aow=n/high;
if(n%high!=0){
    aow++;
}
printf("%d\n",high);
int layer=high;
int nub=0;
int tum=layer;
for(int a=1;a<=tum;a++){
        sort(di[a].begin(),di[a].end());
    }
while(layer > 0){
    for(int a=0;a<di[layer].size();a++){
        //sort(di[layer].begin(),di[layer].end());
        if(nub==aow){
            printf("\n");
            nub=0;
            layer=tum;
            memset(visit,0,sizeof(visit));
        }
        if(visit[di[layer][a]]==0){
            di[layer].erase(di[layer].begin()+a);
            printf("%d ",di[layer][a]);
            //di[layer][a]=-1;
            visit[di[layer][a]]=1;
            nub++;
        }
    }
    if(di[layer].size()==0 && tum==layer){
        tum--;
    }
    //printf("*%d*",layer);
    layer--;
}
printf("\n");

memset(visit,0,sizeof(visit));
}
return 0;}
