#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,pair<int,int> > > vec;
vector<int> mv;
int head[100005];
int ar[100005];
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int main(){
int n,m;
long long ans=0;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    head[a]=a;
}
for(int a=1;a<=m;a++){
    int u,v,w;
    scanf("%d %d %d",&u,&v,&w);
    //printf("%d %d %d",u,v,w);
    vec.push_back({{w,a},{u,v}});
}
sort(vec.begin(),vec.end());
int nub=0;
bool tumpai=false;
while(!vec.empty()){
        int nowu=vec.back().second.first;
        int nowv=vec.back().second.second;
        int cost=vec.back().first.first;
        int leak=vec.back().first.second;
        int h1 = findhead(nowu);
        int h2 = findhead(nowv);
        nub++;

        if(h1 != h2){
            //printf("%d->%d\n",h1,h2);
            head[h1]=head[h2];
            //total+=cost;
            ans+=(long long)cost;
            mv.push_back(leak);
        }else{
            if(tumpai==false){
                mv.push_back(leak);
                ans+=(long long)cost;
                tumpai=true;
            }
        }
        vec.pop_back();
    }
//printf("/");
int val=head[findhead(1)];
bool jue=false;
for(int a=1;a<=n;a++){
    int hh=findhead(a);
    //printf("%d %d\n",a,head[hh]);
    if(hh != val){
        jue=true;
        break;
    }
}
int tt;
scanf("%d",&tt);
if(jue==true || tumpai == false){
    printf("-1\n");
}else{
    printf("%lld\n",ans);
    if(tt==2){
        //sort(mv.rbegin(),mv.rend());
        while(!mv.empty()){
            printf("%d ",mv.back());
            mv.pop_back();
        }
    }
}
return 0;}
