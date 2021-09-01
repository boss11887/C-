#include <bits/stdc++.h>
using namespace std;
struct hh{
    size_t operator()(const pair<int,int>&a)const{
        return a.first+a.second;
    }
};
unordered_map<int,int > um;

pair<int,int> ar[9000005];
vector<int> vec;
vector<int> fv;
vector<int> sv;

int main(){
    int n;
    int nub=0;
    long long m;
    scanf("%d %lld",&n,&m);
    //vec.push_back(0);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back(chua);
    }
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            fv.push_back(vec[a]+vec[b]);
            um[vec[a]+vec[b]]++;
            ar[nub]={a,b};
            //printf("%d %d=%d,%d\n",vec[a]+vec[b],nub,a,b);
            nub++;
        }
    }
    long long cnt=0;
        for(int b=0;b<fv.size();b++){
                long long cal=(long long)fv[b];
                //printf("%d=%lld %d %d %d %d\n",b,m-cal);
                    //printf("%d=%lld %d %d %d %d\n",b,m-cal);
                    cnt+=4*um[m-cal];
                    um[m-cal]--;
        }
    printf("%lld",cnt);
return 0;}
