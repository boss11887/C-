#include <bits/stdc++.h>
using namespace std;
int ar[200005],ar2[200005];
int fenwick[400005];

void add(int a){
    while(a <= n){
        fenwick[a]+=1;
        a+=a&-a;
    }
}

int sum(int a){
    int total=0;
    while(a >0){
        total+=fenwick[a];
        a-=a&-a;
    }
}



int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int i=1;i <= n;i++){
    scanf("%d",&ar[i]);
}
for(int i=1;i <= n;i++){
    scanf("%d",&ar2[i]);
}



return 0;}
/*
2 3
96 36
51 20 22
*/
