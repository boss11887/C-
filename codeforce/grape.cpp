#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int even=0,odd=0;
    int cnt=0;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        if(chua%2==0){
            even++;
        }else{
            odd++;
        }
    }
    for(int a=1;a<=m;a++){
        int chua;
        scanf("%d",&chua);
        if(chua%2==1 && even>0){
            even--;
            cnt++;
        }
        if(chua%2==0 &&odd>0){
            odd--;
            cnt++;
        }
    }
    printf("%d",cnt);
}
