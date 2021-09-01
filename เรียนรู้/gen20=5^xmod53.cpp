#include <bits/stdc++.h>

int dfs(int x,int val){
    if(x==100){
        return 0;
    }
    if(val==20){
        printf("=============================================");
    }
    printf("%d %d\n",x,val%53);
    x++;
    val*=5;
    val%=53;
    dfs(x,val);
}
int main(){
dfs(1,5);
return 0;}
