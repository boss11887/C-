#include <bits/stdc++.h>
int ar[1000005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=1000000;a++){
    for(int b=a;b<=1000000;b+=a){
        ar[b]++;
    }
}
for(int a=1;a<=n;a++){
    int st,ed,chua;
    int nub=0;
    scanf("%d %d %d",&st,&ed,&chua);
    for(int b=st;b<=ed;b++){
        if(ar[b]==chua){
            nub++;
        }
    }
    printf("%d\n",nub);
}

return 0;}
