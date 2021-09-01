#include <bits/stdc++.h>
using namespace std;
double ar[35][35];
unordered_map<long long,double> um(1000000);
int n;
int visit[35];
double ans=0;

double re(int pos,double val){
    int num=0;
    for(int a=1;a<=n;a++){
        if(visit[a]!=0){
            num+=visit[a];
            //printf("(%d ",a);
        }
        num*=11;
    }
    //printf("%d %d\n",pos,num);
    if(um[num] != 0){
        return um[num];
    }
    pos++;
    if(pos==n+1){
        ans=max(ans,val);
        return val;
    }
    if(val==0){
        return 0;
    }
    double high=0;
    for(int a=1;a<=n;a++){
        if(visit[a]==0){
            visit[a]=pos;
            //printf("%f %d %d\n",val*ar[pos][a],pos,a);
            if(val*ar[pos][a] > ans){
            high=max(high,re(pos,val*ar[pos][a]));
            }
            visit[a]=0;
        }
    }
    return um[num]=high;
}

int main(){
scanf("%d",&n);
for(int a=1;a<=n+1;a++){
    for(int b=1;b<=n;b++){
        if(a<=n){
        scanf("%lf",&ar[a][b]);
        ar[a][b]/=100;
        //printf("%f",ar[a][b]);
        }else{
        ar[a][b]=100;
        }
    }
}

printf("%f",re(0,100));
return 0;}
