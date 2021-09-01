#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,int> um;
char s[16000];
string pp;
int main(){
int n,m;
scanf("%d %d",&n,&m);
scanf("%s",s);
pp=s;
int yao=pp.size();
int low=0,high=n*2,mid;
int ans=0;
while(low<=high){
    mid=(low+high)/2;
    //printf("\n%d ",mid);
    long long hh=0;
    long long val=1;
    int cnt=1;
    um.clear();
    int nub=0;
    for(int a=0;a<yao;a++){
        hh*=79;
        hh+=s[a];
        if(a<mid){
            val*=79;
        }else{
            hh-=s[a-mid]*val;
        }
        //printf("%lld",hh);
        if(um[hh]==1 && nub<=0  && cnt<m){
            cnt++;
            nub=mid;
        }
        //printf(" %d \n",nub);
        nub--;
        um[hh]=1;
    }
    if(cnt >= m
       ){
            low=mid+1;
            ans=mid;
        }else{
            high=mid-1;
        }
    //printf("***********%d %d\n",low,high);
}
printf("%d",ans);
return 0;}
/*
20 2
qweeqwqwwwwwqwqweeqw
*/
