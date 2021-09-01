#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,int> um1;
unordered_map<long long,int> um2;
int main(){
int cnt=0;
long long now=0,nxt=1;
um1[0]=1;
um2[0]=1;
while(cnt<=10000){
    long long go=now+nxt;
    um1[go]=1;
    um2[-go]=1;
    cnt++;
    now=nxt;
    nxt=go;
}
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    long long ans;
    scanf("%lld",&ans);
    if(um1[ans] && um2[-ans]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}
return 0;}
// 43466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875
