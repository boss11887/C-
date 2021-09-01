#include <bits/stdc++.h>
using namespace std;
char s[100005],ss[100005];
string s1,s2;
int main(){
int n;
scanf("%d",&n);
while(n--){
    int cnt=0;
    scanf("%s %s",s,ss);
    s1=s;
    s2=ss;
    int s1long=s1.size();
    int val=1;
    int s2long=s2.size();
    long long h1=0,h2=0;
    for(int a=0;a<s1long;a++){
        h1*=79;
        val*=79;
        h1+=s[a]-47;
        printf("h1-%lld\n",h1);
    }
    for(int a=0;a<s2long;a++){
        h2*=79;
        h2+=ss[a]-47;
        if(a>=s1long){
            //printf("%d",a-s1long);
            long long cal=(ss[a-s1long]-47)*val;
            h2-=cal;
        }
        if(h1==h2){
            cnt++;
        }
        printf("h2-%lld\n",h2);
    }
    printf("===%d=====\n\n",cnt);
}

return 0;}
