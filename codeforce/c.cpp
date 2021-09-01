#include <bits/stdc++.h>
using namespace std;
long long ar[300005],qq[300005];
int main(){
    int n,m;
    long long ans=0;
    scanf("%d %d",&n,&m);
    long long aow;
    scanf("%lld",&aow);
    ar[1]=aow;
    for(int a=2;a<=n;a++){
        long long chua;
        scanf("%lld",&ar[a]);
        ar[a]=ar[a];
    }
    for(int a=2;a<=n;a++){
        ans=__gcd(ans,ar[a]-ar[a-1]);
        //printf("**%lld**",ans);
    }
    //printf("**%lld**",ans);
    for(int a=1;a<=m;a++){
        long long chua;
        scanf("%lld",&chua);
        if(ans%chua==0 && chua<=ans){
            printf("YES\n");
            printf("%lld %d",aow,a);
            return 0;
        }
    }
    printf("NO");
    return 0;
}
