#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int n;
int fenwick[500005];
int ar[500005];

void add(int a){
    while(a<=500000){
        //printf("--%d\n",a);
        fenwick[a]++;
        a+=a&-a;
    }
}
int sum(int a){
    long long ss=0;
    while(a>0){
        ss+=fenwick[a];
        a-=a&-a;
    }
    return ss;
}
//int total(int a)
int main(){
while(1){
    scanf("%d",&n);
    long long total=0;
    if(n==0){
        break;
    }
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
        vec.push_back({ar[a],a});
    }
    sort(vec.begin(),vec.end());
    for(int a=0;a<vec.size();a++){
        ar[vec[a].second]=a+1;
        //printf("==%d\n",vec[a].second);
    }
    vec.clear();
    for(int a=n;a>=1;a--){
        total+=sum(ar[a]);
        //printf("**%d",sum(ar[a]-1));
        add(ar[a]);
    }
    printf("%lld\n",total);

    memset(fenwick,0,sizeof(fenwick));
}

return 0;}

