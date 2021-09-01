#include <bits/stdc++.h>
int ar[50];
int nub=0;

int main(){
for(int a=1;a<=10;a++){
    int chua;
    scanf("%d",&chua);
    if(ar[chua%42]==0){
        ar[chua%42]++;
        nub++;
    }
}
printf("%d",nub);

return 0;}
