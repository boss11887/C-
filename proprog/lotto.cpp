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
            int combo=0;
            for(int e=n-5;e<=n;e++){
                if(use[e]==1){
                    combo++;
                }
            }
            bool www=false;
            if(combo==6){
                www=true;
            }
                  int nub=0;
            for(int c=1;c<=n;c++){
                  if(nub==5 && use[c]==1){
                           printf("%d",ar[c]);
                   }else if(use[c]==1){
                    nub++;
                    printf("%d ",ar[c]);
                }
            }
            if(www == false){
            printf("\n");
            }
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
        printf("\n\n");
    }
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    re(1);
    ft=true;
}

return 0;}
