#include <bits/stdc++.h>
using namespace std;
char ss[5000005];
string str;
int main(){
int n;
printf("%d",0100|(0<<3));
gets(ss);
sscanf(ss,"%d",&n);
gets(ss);
long long want=0;
long long val=1;
str=ss;
int yao=str.size();
for(int a=0;a<yao;a++){
    want*=37;
    if(a != 0){
        val*=37;
    }
    want+=ss[a]-'0';
    //printf("%lld\n",want);
}
long long now=want;
for(int a=0;a<yao;a++){
    now-=(ss[a]-'0')*val;
    now*=37;
    now+=ss[a]-'0';
    if(now==want){
        printf("%d",a+1);
        break;
    }
}
return 0;}
