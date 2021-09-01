#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
unordered_map<int,int> maxar(1000005);
unordered_map<int,int> lowar(1000005);

//int low=2e9,high=-2e9;
int main(){
int n;
scanf("%d",&n);
int chua;
for(int a=1;a<=n;a++){
    chua;
    scanf("%d",&chua);
    //low =min(low,chua);
    //high=max(high,chua);
    vec.push_back(chua);
    if(lowar[chua]==0){
        lowar[chua]=a;
    }
    maxar[chua]=a;
}
sort(vec.begin(),vec.end());
vec.push_back(200000000);
int last=vec[0];
int highdiff=0;
int calh;
int call;
int fcal;
int now;
highdiff=abs(maxar[last]-1);
for(int a=0;a<vec.size();a++){
    now=vec[a];
    if(last != now){
        fcal=a+1;
        call=abs(lowar[last]-a);
        highdiff=max(highdiff,call);
        printf("%d %d\n",last,highdiff);
        highdiff=0;
        highdiff=abs(maxar[now]-fcal);
    }
    //calh=abs(maxar[now]-fcal);
    //call=abs(lowar[now]-fcal);
    //int mm=max(calh,call);
    //highdiff=max(highdiff,mm);
    last = now;
}
return 0;}
