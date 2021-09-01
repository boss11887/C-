#include <bits/stdc++.h>

int main(){
int n;
scanf("%d",&n);
while(n--){
    int q;
    signed int ans=0;
    scanf("%d",&q);
    for(int a=1;a<=q;a++){
        int pp=q+a;
        for(int b=1;b<=pp;b++){
            int ppp=q+a+b;
            for(int c=1;c<=ppp;c++){
                signed int cal=(a*b*c)%(a+b+c);
                ans+=cal;
            }
        }
    }
    printf("%d\n",ans);
}


return 0;}
