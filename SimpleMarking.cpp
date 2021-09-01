#include <bits/stdc++.h>
using namespace std;
string ss;
int ar[305];
char s[1005];

int main(){
int n;
gets(s);
sscanf(s,"%d",&n);
for(int a=0;a<n;a++){
    scanf("%d",&ar[a]);
}
gets(s);
gets(s);
ss=s;
int yao=ss.size();
int nub=0;
int cnt=0;
for(int a=0;a<=yao+1000;a++){
    if((a)%n==0 && a > yao-1){
        //printf("***%d-****",a);
        break;
    }
    cnt++;
    int now=(a%n);
    if(ar[now]+nub <= yao){
    //printf("%d ",ar[now]+nub);
    printf("%c",s[ar[now]+nub-1]);
    //printf("%d",a);
    }else{
        printf(" ");
    }
    if((a+1)%n==0 && a != 0){
        nub+=n;
    }
}
//printf("%s",s);
//printf("%d",cnt);
return 0;}

