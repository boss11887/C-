#include <bits/stdc++.h>
using namespace std;
int ar[255][255];

int main(){
int n;
scanf("%d",&n);
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
        scanf("%d",&ar[a][b]);
    }
}
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
        for(int c=0;c<n;c++){
            ar[b][c]=min(ar[b][c],ar[b][a]+ar[a][c]);
        }
    }
}
int q;
scanf("%d",&q);
for(int a=1;a<=q;a++){
    int st,mid,ed;
    scanf("%d %d %d",&st,&mid,&ed);
    int sme=ar[st][mid]+ar[mid][ed];
    int np=ar[st][ed];
    int dif=sme-np;
    if(dif > 0){
        printf("%d %d\n",sme,dif);
    }else{
        printf("%d 0\n",sme);
    }
}
return 0;}
