#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int ar[105];
int cnt=0;

int main(){
int n;
scanf("%d",&n);
int high=-1e8,low=1e8;
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    vec.push_back(chua);
    if(ar[chua]==0){
        cnt++;
        ar[chua]=1;
        //printf("**%d",chua);
    }
    high=max(high,chua);
    low=min(low,chua);
}
//printf("%d %d %d\n",cnt,(high+low)/2,ar[(high-low)/2]);
if(cnt==0){
    printf("-1");
}else if(cnt==1){
    printf("0");
}else if(cnt==2){
    if((high-low)%2==0){
    printf("%d",(high-low)/2);
    }else{
    printf("%d",high-low);
    }
}else if(cnt==3 && ar[(high+low)/2]==1&&(high+low)%2==0){
    printf("%d",(high+low)/2-low);
}else{
    printf("-1");
}
return 0;}
//55
