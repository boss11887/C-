#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
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
    printf("\n")
}
tum=true;
int high=-1e9;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    vec.push_back(chua);
    ar[chua]++;
    if(ar[chua]>high){
        high=ar[chua];
        want=chua;
    }
}
sort(vec.begin(),vec.end());
int aow=n/high;
if(n%high!=0){
    aow++;
}
printf("%d\n",high);
for(int b=1;b<=high;b++){
    int nub=0;
    memset(visit,0,sizeof(visit));
    for(int a=0;a<vec.size();a++){
        if(nub==aow-1 && visit[want]==0){
            printf("%d ",want);
            break;
        }
        if(visit[vec[a]]==0 && vec[a] != -1){
            visit[vec[a]]=1;
            nub++;
            printf("%d ",vec[a]);
            vec[a]=-1;
        }
        if(nub==aow){
            break;
        }
    }
    printf("\n");
}
vec.clear();



}
return 0;}
