#include <bits/stdc++.h>
int n;
long long ar[15],arr[15];
int want[15];
long long low=1e8;

int abs(long long a){
    if(a<0)
        return -a;
    return a;
}

void dfs(int a){
if(a==n+1){
    long long qs=0,qt=1;
    bool jue=false;
    for(int b=1;b<=n;b++){
        //printf("-wantb=%d",want[b]);
        if(want[b]){
            jue=true;
            qs+=arr[b];
            qt*=ar[b];
        }
    }
    //printf(" -(%lld,%lld)-",qs,qt);
    long long ans=abs(qs-qt);
    if(ans<low && jue==true){
        low=ans;
    }
    //printf("\n");
    return;
}
want[a]=0;
dfs(a+1);
want[a]=1;
dfs(a+1);
}

int main(){
scanf("%d",&n);

for(int a=1;a<=n;a++){
    scanf("%lld %lld",&ar[a],&arr[a]);
}
dfs(1);
printf("%lld",low);
return 0;}
