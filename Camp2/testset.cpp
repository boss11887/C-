#include <cstdio>
#include <set>
using namespace std;
set<int> s;
set<int>::iterator it;
int main(){
    int n;
    for(int a=1;a<=5;a++){
    scanf("%d",&n);
    s.insert(n);
    }
        printf(".%d.",s.size());
        it=s.find(5);
        s.erase(it);
        printf(".%d.",s.size());

     for (it=s.begin(); it!=s.end(); ++it){
        printf("\n%d",*it);
     }
return 0;}
