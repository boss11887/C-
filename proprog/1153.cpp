#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[1005];
int n,mr,dp[1005];

int re(int a){
    if(a>mr)
        return 0;
    if(dp[a]!=-1)
        return dp[a];
    int high=0;
    if(vec[a].empty()){
        high=re(a+1);
    }else{
        int arr=0,pos=0;
        int cnt=0;
        int firstval=0,secondval=0;
        for(auto b:vec[a]){
            //printf("(%d-->%d)==%d\n",a,b.first,b.second);
            int firstval=re(b.first)+b.second;
            int secondval=re(a+1);
            int nhigh=0;
            if(firstval > secondval && firstval > nhigh){
                arr=a;
                pos=cnt;
                nhigh=max(nhigh,firstval);
            }else{
                nhigh=secondval;
            }
            high=max(nhigh,high);
            cnt++;
        }
        //printf("==%d %d\n",arr,pos);
        vec[arr][pos]={1e6,0};
    }
    //printf("%d %d\n",a,dp[a]);
    //printf("*");
    return dp[a]=high;
}



int main(){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    dp[a]=-1;
    int st,ed,val;
    scanf("%d %d %d",&st,&ed,&val);
    mr=max(mr,ed);
    vec[st].push_back({ed,val});
}
int fans=re(1);
//printf("%d\n",re(1));
for(int a=1;a<=n;a++){
    dp[a]=-1;
}
int sans=re(1);
//printf("%d",re(1));
printf("%d",fans+sans);
return 0;}
