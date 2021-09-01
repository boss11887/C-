#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
    vec.push_back(0);
    for(int a=1;a<=31;a++){
        long long now=1;
        int cal=a;
        bool t2=false;

        for(int b=1;b<=31;b++){
            if(b==cal){
                cal+=a;
                if(t2==false){
                    t2=true;
                }else{
                    t2=false;
                }
                //printf("%lld\n",now);
                if(now < 2000000000){
                vec.push_back(now);
                }
            }
            if(t2==false){
                now*=2;
                now+=1;
            }else{
                now*=2;
            }
        }
    }
    sort(vec.begin(),vec.end());
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        int go,to;
        scanf("%d %d",&go,&to);
        int up=upper_bound(vec.begin(),vec.end(),to)-vec.begin();
        int lo=lower_bound(vec.begin(),vec.end(),go)-vec.begin();
        printf("%d\n",up-lo);
    }
return 0;}
