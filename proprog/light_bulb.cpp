#include <bits/stdc++.h>
using namespace std;
int main(){
    long long now;
    while(1){
    scanf("%lld",&now);
    if(now==0){
        break;
    }
    //printf("**%f**",now);
    double ne=sqrt(now);
    long long val=ne;
    //printf("%lf %d\n",ne,val);
    //printf("%f %lld\n",ne,val);
    ne-=(double)val;
    if(ne==(double)0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    }
}
