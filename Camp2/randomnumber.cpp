#include <stdlib.h>
#include <cstdio>
#include <time.h>
using namespace std;
int main(){
    int n,m,r;
    srand(time(NULL));
    scanf("%d %d %d",&r,&n,&m);
    int ar[n][m];
    for(int i=0;i<n;i++){
        printf("SET",i+1);
        for(int j=0;j<m;j++){
            ar[i][j]=1+rand()%r;
            printf(" %d",ar[i][j]);
            if((j+1)%10==0)
                printf("\n");
        }
        if(m%10!=0)
                printf("\n");
    }


}
