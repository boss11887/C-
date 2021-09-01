#include <bits/stdc++.h>
using namespace std;
int n;
int low=1e9;
int ar[50];
int tim[20];
int buk[20];

void re(int a){
    if(a==n+1){
        int tt=1,bb=0;
        bool jue=false;
        for(int c=1;c<=n;c++){
            if(ar[c]==1){
                tt*=tim[c];
                bb+=buk[c];
                jue=true;
            }
        }
        int td=abs(tt-bb);
        if(td<low && jue==true){
            low=td;
        }
        return ;
    }
    for(int d=0;d<=1;d++){
        ar[a]=d;
        re(a+1);
    }
}
int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&tim[a],&buk[a]);
}
re(1);
printf("%d",low);

return 0;}
