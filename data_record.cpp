#include <bits/stdc++.h>
using namespace std;
struct mys{
    int id;
    char name[31];
    char sur[61];
    int year;
};
mys ms[20005];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int myid;
    char rname[31],surn[61];
    int myear;
    scanf("%d %s %s %d",&myid,rname,surn,&myear);
    ms[a].id=myid;
    strcpy(ms[a].name,rname);
    strcpy(ms[a].sur,surn);
    ms[a].year=myear;
}
int want;
scanf("%d",&want);
bool jue=false;
for(int a=1;a<=n;a++){
    int now=ms[a].year;
    if(now == want){
        jue=true;
        printf("%0.8d %s %s\n",ms[a].id,ms[a].name,ms[a].sur);
    }
}
if(jue==false){
    printf("None");
}
return 0;}
