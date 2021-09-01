#include <bits/stdc++.h>
using namespace std;
int m[1005][1005];
int main(){

int n,nub=0;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int row,col;
    scanf("%d %d",&row,&col);

    if(m[row][col]==0){
        nub++;
        m[row][col]=1;
    }
}

printf("%d",nub);
return 0;
}
