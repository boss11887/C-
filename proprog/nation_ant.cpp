#include <bits/stdc++.h>
using namespace std;
unordered_map<int,vector<int> > um;
vector<int> tua;
int ar[50005];
vector<pair<pair<int,int>,int> > vec;
int head[50005];
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int main(){
int n,m,k;
scanf("%d %d %d",&n,&m,&k);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
    if(um[ar[a]].size()==0){
        tua.push_back(ar[a]);
    }
    um[ar[a]].push_back(a);
    //printf("->%d\n",um[ar[a]][0]);
}
int high=0,low=0,mid,ans=0;
for(int a=1;a<=m;a++){
    int from,go,w;
    scanf("%d %d %d",&from,&go,&w);
    vec.push_back({{from,go},w});
    //vec[go].push_back({from,w});
    high=max(high,w);
}

high++;
while(low<=high){
    mid=(low+high)/2;
    for(int a=1;a<=n;a++){
        head[a]=a;
    }
    int cnt=0;
    for(int a=0;a<m;a++){
        int now=vec[a].second;
        if(now>mid){
            int h1=vec[a].first.first;
            int h2=vec[a].first.second;
            h1=findhead(h1);
            h2=findhead(h2);
            if(h1 != h2){
                //printf("ans=%d %d\n",vec[a].first.first,vec[a].first.second);
                head[h1]=h2;
            }
        }else{
            cnt++;
        }
    }
    //printf("*");
    bool jue=false;
    for(int a=0;a<tua.size();a++){
        //printf("->%d   ",tua[a]);
        int h1=um[tua[a]][0];
        //printf("%d ",h1);
        h1=findhead(h1);
        for(int b=1;b<um[tua[a]].size();b++){
            int h2=um[tua[a]][b];
            //printf("%d\n",h2);
            h2=findhead(h2);
            //printf("hh == %d %d\n",h1,h2);
            if(h1 != h2){
                jue=true;
                break;
            }
        }
        if(jue==true){
            break;
        }
    }
    if(jue){
        high=mid-1;
    }else{
        ans=max(ans,cnt);
        low=mid+1;
    }
    //printf("==%d %d\n",mid,jue);
}
printf("%d",ans);
return 0;}
/*
6 5 3
1 1 1 1 1 1
1 3 2
2 3 1
2 4 2
4 5 1
4 6 2
*/
