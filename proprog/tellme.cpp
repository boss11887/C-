#include <bits/stdc++.h>
using namespace std;
string ss;
char ft[100005],st[100005];

int main(){
int n;
scanf("%d",&n);
long long h1=0,h2=0,val=1;

while(n--){
    h1=0,h2=0,val=1;
    scanf("%s %s",ft,st);
    ss=ft;
    int ll;
    ll=ss.size();
    for(int a=0;a<ll;a++){
            h1*=101;
            val*=101;
        h1+=ft[a]-'0';
        //printf("h1--%lld\n",h1);
    }
    //printf("%d",h1);
    ss=st;
    bool jue=false;
    int cnt=0;
    for(int a=0;a<ss.size();a++){
        h2*=101;
        h2+=st[a]-'0';
        long long cal=0;
        if(a>=ll){
            cal=st[a-ll]-'0';
            cal*=val;
            h2-=cal;
        }
        //printf("h2--%lld\n",h2);
        if(h2 == h1){
            cnt++;
        }
    }
    printf("%d\n",cnt);
}


return 0;}
/*
2
789456123
123456789789456123
*/
