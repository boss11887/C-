#include <bits/stdc++.h>
using namespace std;
int ar[105];

int main(){
int n,f=6,s=9,t=20;
scanf("%d",&n);
for(int a=0;a<=17;a++){
    for(int b=0;b<=17;b++){
        for(int c=0;c<=17;c++){
            int now=a*f+s*b+t*c;
            if(now<=100){
                ar[now]=1;
            }
        }
    }
}
bool jue=false;
for(int a=1;a<=n;a++){
    if(ar[a]==1){
        printf("%d\n",a);
        jue=true;
    }
}
if(jue==false){
    printf("no");
}

return 0;}
