#include <cstdio>
#include <unordered_map>
using namespace std;
int ar[1000001];
unordered_map<long ,int> m(7500000);
int main(){
    int allvote,people,maxper;
    long phone,num;
scanf("%d %d %d",&allvote,&people,&maxper);
for(int a=1;a<=allvote;a++){
    scanf("%ld %d",&phone,&num);
    if(m[phone]<maxper){
        m[phone]++;
        ar[num]++;
    }
}
for(int a=1;a<=people;a++){
    printf("%d\n",ar[a]);
}


return 0;}
