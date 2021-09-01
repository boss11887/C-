#include <bits/stdc++.h>
using namespace std;
int ar[105];
int kum[105];
int block;

int update(int idx,int val){
    ar[idx]=v;
    int mc=1e9;
    int bb=idx/block;
    for(int i=bb*block;i<(bb+1)*block && i < n;i++){
        mc=min(mc,ar[i]);
    }
    kum[bb]=mc;
}

int qqq(){

}
int main(){
int n;
scanf("%d",&n);
block=sqrt(n);
for(int a=0;a<n;a++){
    scanf("%d",&ar[a]);
}
return 0;}
