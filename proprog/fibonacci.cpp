#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
while(scanf("%d %d",&n,&m) != EOF){
long long fm=1;
for(int a=1;a<=m;a++){
    fm*=2;
}
//printf("%d",fm);
long long last=0,now=1,ans;
if(n==0){
    printf("0\n");
}else if(n==1){
    printf("1\n");
}else{
    for(int a=2;a<=n;a++){
        last%=fm;
        now%=fm;
        ans=last+now;
        ans%=fm;
        last=now;
        now=ans;
        //printf("%d ",ans);
    }
    printf("%lld\n",ans);
}

}
return 0;
}
