#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
long long fenwick[100005];
int fenwick2[100005];

void add(int a,int val){
    while(a<=100000){
        fenwick[a]+=val;
        a+=a&-a;
    }
}
long long total(long long a){
    long long ruam=0;
    while(a>0){
        ruam+=fenwick[a];
        a-=a&-a;
    }
    return ruam;
}

void add2(int a,int val){
    while(a<=100000){
        fenwick2[a]+=val;
        a+=a&-a;
    }
}
int total2(int a){
    int ruam=0;
    while(a>0){
        ruam+=fenwick2[a];
        a-=a&-a;
    }
    return ruam;
}


int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    vec.push_back({u,v});
}
sort(vec.rbegin(),vec.rend());
long long sum=0;
int last=1e8;
long long jum1,jum2;
for(int a=0;a<vec.size();a++){
    int now=vec[a].second;
    int val=vec[a].first;
    //um[now].push_back(val);
    /*
    if(cnt[now]>=2){
        for(int a=2;a<=now;a++){
            for(int b=0;b<um[now].size();b++){
                sum-=um[now][b];
                printf("*%d*",um[now][b]);
            }
        }
    }
    */
    sum+=total(now);
    //jum1=total(now);
    long long tua=total2(now);
    sum+=tua*val;
    //jum2=tua*val;
   // printf("***%d\n",total(now));
    add(now,val);
    add2(now,1);
    last=now;
}
printf("%lld",sum);
return 0;}
/*
4
1 1
1 2
1 3
2 2
*/
