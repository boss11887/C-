#include <bits/stdc++.h>
using namespace std;
struct hh{
    size_t operator()(const pair<int,int>&a)const{
        return a.first+a.second;
    }
};
map<int,pair<int,int> > um;
pair<int,int> ar[9000005];
vector<int> vec;
vector<int> fv;
vector<int> sv;

int main(){
    int n;
    int nub=0;
    long long m;
    scanf("%d %d",&n,&m);
    //vec.push_back(0);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back(chua);
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(a==b){
                continue;
            }
            fv.push_back(vec[a]+vec[b]);
            um[vec[a]+vec[b]]={vec[a],vec[b]};
            ar[nub]={a,b};
            //printf("%d %d=%d,%d\n",vec[a]+vec[b],nub,a,b);
            nub++;
        }
    }
    long long cnt=0;
        for(int b=0;b<fv.size();b++){
                long long cal=fv[b];
                printf("%d=%lld %d %d %d %d\n",b,cal,ar[b].first, um[m-cal].first , ar[b].second , um[m-cal].second);
                if(um[m-cal].first!=0 && ar[b].first < ar[b].second && ar[b].second < um[m-cal].first && um[m-cal].first < um[m-cal].second){
                    cnt++;
                }
        }
    printf("%lld",cnt*24);
return 0;}
