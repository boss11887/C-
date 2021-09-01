#include <bits/stdc++.h>
using namespace std;
int n;
int ar[20];
int use[20];

void re(int a){
    if(a==n+1){
        int cnt=0;
        for(int c=1;c<=n;c++){
            if(use[c]==1){
                cnt++;
            }
        }
        if(cnt==6){
            for(int c=1;c<=n;c++){
                if(use[c]==1){
                    printf("%d ",ar[c]);
                }
            }
            printf("\n");
        }
        return ;
    }
    for(int c=1;c>=0;c--){
        use[a]=c;
        re(a+1);
    }
}

int main(){
    bool ft=false;
while(scanf("%d",&n) && n !=0){
    if(ft==true){
        printf("\n");
    }
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    re(1);
    ft=true;
}
return 0;}
/// 7 1 2 3 4 5 6 7 8 1 2 3 5 8 13 21 34 0
