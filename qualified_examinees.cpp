#include <bits/stdc++.h>
using namespace std;
struct mys{
    char s[10];
    int score;
};
mys mys[10005];
int main(){
int n;
scanf("%d",&n);
double total=0;
char mychar[15];
int now;
for(int a=1;a<=n;a++){
    scanf("%s %d",mychar,&now);
    total+=now;
    strcpy(mys[a].s,mychar);
    mys[a].score=now;
}
total/=n;
int cnt=0;
for(int a=1;a<=n;a++){
    if(mys[a].score>=total){
        cnt++;
    }
}
printf("%d\n",cnt);
for(int a=1;a<=n;a++){
    if(mys[a].score>=total){
        printf("%s\n",mys[a].s);
    }
}
return 0;}
