#include <bits/stdc++.h>
using namespace std;

int ar[50005][125];

int main(){
int n;
scanf("%d",&n);
int q,w,e;
int high=0;

for(int a=1;a<=n;a++){
    scanf("%d %d %d",&q,&w,&e);
    int total=e+w-1;
    for(w=w;w<=total;w++){
        ar[q][w]=1;
    }
    if(q>high){
        high=q;
    }
}

for(int a=1;a<=high;a++){
    int now=0;
    for(int b=1;b<=70;b++){
        now=ar[a][b];
        if(now>=1){
            printf("x");
        }else{
            printf("o");
        }
    }
    printf("\n");
}

return 0;}
