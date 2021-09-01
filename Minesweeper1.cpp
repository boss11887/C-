#include <bits/stdc++.h>

int main(){
int row,col;
scanf("%d %d",&row,&col);
int cnt=0;
for(int a=1;a<=row;a++){
    for(int b=1;b<=col;b++){
        int chua;
        scanf("%d",&chua);
        if(chua==1){
            cnt++;
        }
    }
}
printf("%d",cnt);

return 0;}
