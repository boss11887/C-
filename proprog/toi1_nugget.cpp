#include <bits/stdc++.h>

int ar[105];

int main(){
    int n;
    scanf("%d",&n);
for(int a=0;a<=17;a++){
    for(int b=0;b<=12;b++){
        for(int c=0;c<=5;c++){
            int total=a*6+b*9+c*20;
            if(total <= 100){
                ar[total]=1;
            }
        }
    }
}
bool jue=false;
for(int a=1;a<=n;a++){
    if(ar[a]==1){
        jue=true;
        printf("%d\n",a);
    }
}
if(jue==false){
    printf("no");
}
return 0;}
