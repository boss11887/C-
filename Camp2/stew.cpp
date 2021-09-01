#include <bits/stdc++.h>
using namespace std;
int n;
int s[20],bi[20];
int low=2e9;
int use[20];

void dfs(int a){
    if(a==n+1){
        int totals=1,totalb=0;
        bool jue=false;
        for(int b=1;b<=n;b++){
            //printf("%d ",use[b]);
            if(use[b]==1){
                totals*=s[b];
                totalb+=bi[b];
                jue=true;
            }
        }
        //printf("\n");
        int ruam=abs(totals-totalb);
        if(ruam < low && jue==true){
            low=ruam;
        }
        return;
    }
    for(int b=0;b<=1;b++){
        use[a]=b;
        dfs(a+1);
    }
}
int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&s[a],&bi[a]);
}
dfs(1);
printf("%d",low);
return 0;}
