#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um;
unordered_map<int,int> posmin;
unordered_map<int,int> posmax;
vector<int> vec;
int ar[100005];

int abs(int a){
    if(a < 0)
        return -a;
    return a;
}


int main(){
int n;
scanf("%d",&n);
int maxnum=0;
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
        vec.push_back(ar[a]);
    if(posmin[ar[a]]==0){
        posmin[ar[a]]=a;
    }
    posmax[ar[a]]=a;
}
sort(vec.begin(),vec.end());
int last=vec[0];
int realmax=0;
int high=0;
for(int a=0;a<=vec.size();a++){
    int cal=a+1;
    int now=vec[a];
    int maxxx=max(abs(posmin[now]-cal),abs(posmax[now]-cal));
    //printf("%d %d\n",now,maxxx);
    if(last != vec[a]){
        printf("%d %d\n",last,high);
        //printf("DBG -%d- %d %d\n",last,posmin[last],posmax[last]);
        high=0;
    }
    if(maxxx > high){
        high=maxxx;
    }
    last=vec[a];
}
return 0;}
///12 4 3 2 1 5 1 2 1 3 6 5 4
