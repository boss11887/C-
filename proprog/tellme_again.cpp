#include <bits/stdc++.h>
using namespace std;
string ss;
char ft[100005],st[100005];

int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%s %s",ft,st);
    ss=ft;
    int flong;
    long long h1=0,h2=0,val=1;
    int ll=ss.size();
    flong=ll;
    for(int a=0;a<ll;a++){
        val*=79;
        h1*=79;
        h1+=ft[a]-47;
    }
    ss=st;
    int cnt=0;
    ll=ss.size();
    long long cal=0;
    for(int a=0;a<ll;a++){
        h2*=79;
        h2+=st[a]-47;
        //printf("**%lld**",h2);
        if(a>=flong){
            cal=st[a-flong]-47;
            cal*=val;
            h2-=cal;
            //printf("%lld ",cal);
        }
        if(h1==h2){
            cnt++;
        }
        //printf("h2--%lld\n",h2);
    }
    printf("%d\n",cnt);
}


return 0;
}
