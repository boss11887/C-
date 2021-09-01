#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int> mv;
int ar[10000005];
int dp[10000005];

int main(){
for(int a=2;a<=10000000;a++){
    if(ar[a]==1){
        continue;
    }
    vec.push_back(a);
    for(int b=a+a;b<=10000000;b+=a){
        ar[b]=1;
    }
}
for(int a=1;a<=2800000;a++){
    int val=a;
    int cnt=0;
    int tua=0;
    while(val > 1){
        if(ar[val]==0){
            val=0;
            cnt++;
            break;
        }
        if(val%vec[tua]==0){
            cnt++;
            val/=vec[tua];
        }else{
            tua++;
        }
        //printf("%d\n",val);
    }
    dp[a]=cnt;
    //printf("%d %d\n",a,cnt);
    dp[a]+=dp[a-1];
    mv.push_back(dp[a]);
}
int n;
int nubb=0;
//printf("%d",mv[mv.size()-1]);
while(1){
    nubb++;
    int now;
    scanf("%d",&now);
    if(now<0){
        break;
    }
    if(now==0){
        printf("Case %d: 0!\n",nubb);
    }else if(mv[lower_bound(mv.begin(),mv.end(),now)-mv.begin()]==now){
    printf("Case %d: %d!\n",nubb,lower_bound(mv.begin(),mv.end(),now)-mv.begin()+1);
    }else{
    printf("Case %d: Not possible.\n",nubb);
    }
}
return 0;}
