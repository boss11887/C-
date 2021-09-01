#include <cstdio>
#include <map>
using namespace std;
map<int,int> m;
int main(){
int x;
int n,count=0;
scanf("%d",&n);
while(n--){
    scanf("%d",&x);
    if(m[x]==0){
        count++;
        m[x]++;
    }
}

printf("%d",count);
return 0;}
