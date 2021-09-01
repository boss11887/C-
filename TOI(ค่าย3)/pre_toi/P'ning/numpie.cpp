#include <bits/stdc++.h>
using namespace std;
int ar[25][25];

int main(){
int n;
scanf("%d",&n);
while(n--){
    int m;
    scanf("%d",&m);
    int cnt=0;
    int wrong=0;
    for(int a=1;a<=m;a++){
        for(int b=1;b<=m;b++){
            int chua;
            scanf("%d",&chua);
            if(chua != cnt){
                wrong++;
            }
            cnt++;
        }
    }
    printf("%d\n",wrong*2);
}


return 0;}
