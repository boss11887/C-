#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    int n;
    scanf("%d",&n);
    if(n==0){
        break;
    }
    int ruam=0;
    int high=-1e9;
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        ruam+=chua;
        if(ruam<0){
            ruam=0;
        }
        high=max(high,ruam);
    }
    if(high <=0){
        printf("Losing streak.\n");
    }else{
        printf("The maximum winning streak is %d.\n",high);
    }
    }
}
