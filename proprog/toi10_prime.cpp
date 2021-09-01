#include <bits/stdc++.h>
using namespace std;
bool ar[10000005];
vector<int> vec;

int main(){
int n=10000005;
int cnt=0;
for(int a=2;a<=n;a++){
    if(ar[a]==0){
        vec.push_back(a);
        //printf("%d\n",a);
        //cnt++;
        for(int b=a+a;b<=n;b+=a){
            ar[b]=1;
        }
    }
}
int chua;
scanf("%d",&chua);
printf("%d",vec[chua-1]);
return 0;}
