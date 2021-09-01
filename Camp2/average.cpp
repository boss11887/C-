#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
double total=0;
double now;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%lf",&now);
    total+=now;
}
total/=n;
printf("%f",total);
return 0;}
