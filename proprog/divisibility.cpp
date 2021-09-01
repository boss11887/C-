#include <bits/stdc++.h>
using namespace std;
int ar[10005];
bool ans[10005][205];

int main(){
int qq;
scanf("%d",&qq);
while(qq--){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    ar[a]%=m;
}
memset(ans,0,sizeof(ans));
ans[0][100]=1;
for(int a=1;a<=n;a++){
    for(int b=0;b<=200;b++){
        int num=b-100;
        if(ans[a-1][b]==1){
            //printf("%d==%d\n",a,num);
            ans[a][(num+ar[a])%m+100]=1;
            ans[a][(num-ar[a])%m+100]=1;
        }
    }
}

bool jue=false;
for(int b=0;b<=200;b++){
    int num=b-100;
    if(ans[n][b]==1 && num%m==0){
        jue=true;
    }
}
if(jue==true){
    printf("Divisible\n");
}else{
    printf("Not divisible\n");
}
}
return 0;}
