#include <bits/stdc++.h>
using namespace std;
int high=0;
int ar[10005];
int n;

int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int chua;
    scanf("%d",&chua);
    ar[chua]++;
    high=max(ar[chua],high);
}
for(int a=1;a<=10001;a++){
    if(ar[a]==high){
        printf("%d ",a);
    }
}
return 0;}
