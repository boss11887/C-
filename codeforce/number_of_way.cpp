#include <bits/stdc++.h>
using namespace std;
int ar[500005];

int main(){
int n;
long long sum=0;

scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    sum+=ar[a];
}
if(sum%3!=0){
    printf("0");
    return 0;
}
int cnt=0;
int aowna=0;
long long div=sum/3;
long long now=0;
for(int a=1;a<=n;a++){
    now+=ar[a];
    if(now==div && cnt<3){
        cnt++;
        now=0;
    }else if(now==0){
        aowna++;
    }
}
if(cnt < 3){
    printf("0");
    return 0;
}else{
    if(div == 0){
    long long ans=0;
    aowna++;
    for(int a=1;a<=aowna;a++){
        ans+=a;
    }
    //printf("==%d   ",aowna);
    printf("%lld",ans);
    }else{

    }
}
return 0;}
