#include <bits/stdc++.h>
using namespace std;
int ar1[200005];
int ar2[200005];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar1[a]);
    }
    for(int a=1;a<=m;a++){
        scanf("%d",&ar2[a]);
    }
    int cnt=0;
    for(int a=1;a<=n;a++){
        int chua=a;
        for(int b=1;b<=m+1;b++){
            if(b==m+1){
                cnt++;
                //printf("good\n");
                break;
            }
            //printf("%d %d\n",b,chua);
            if(ar1[chua]%ar2[b]==0){
                chua++;
                if(chua>n+1){
                    break;
                }
            }else{
                //printf("q\n");
                break;
            }
        }
    }
    printf("%d",cnt);
}
