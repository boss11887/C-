#include <cstdio>

int main(){

int n,count=1;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
    if(count%n==0){
        printf("%d ",n%10);
    }else{
        printf("%d ",count%n%10);
    }
    if(b!=n){
        count++;
    }
}
printf("\n");
}


return 0;}
