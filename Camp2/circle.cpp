#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int total=n;
    float nub=0;
    while(n--){
        float h1,h2;
        scanf("%f %f",&h1,&h2);
        float cal=sqrt(h1*h1+h2*h2);
        if(cal <= 1){
            nub++;
        }
    }
    float ans=nub/total;
    printf("%.3f",ans);
return 0;}
