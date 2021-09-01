#include <cstdio>
#include <map>
#include <string>
using namespace std;
map<string,string> m;
map<string,string>::iterator it;
int main(){
    int n;
    char w[2001],e[2001];
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%s %s",w,e);
        m[w]=e;
    }
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%s",w);
        printf("%s\n",m[w].c_str());
    }


return 0;}
