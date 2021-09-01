#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int ar[1000005];
int main(){
    ar[1]=1;
    for(int a=2;a<=1000000;a++){
        if(ar[a]==0){
            vec.push_back(a);
            for(int b=a+a;b<=1000000;b+=a){
                ar[b]=1;
            }
        }
    }
int n;
scanf("%d",&n);
int nub=vec.size()/2;
//nub++;
//printf("%d**",nub);
for(int a=0;a<nub;a++){
    int aow=n-vec[a];
    //printf("%d ",ar[3]);
    if(vec[a]<n){
        if(ar[aow]==0){
            printf("%d %d",vec[a],aow);
            return 0;
        }
    }
}
printf("-1");
return 0;}
