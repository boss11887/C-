#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
int test;
int head[10005];




int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int total;
int main(){
scanf("%d",&test);
while(test--){
    int n,m;
    total=0;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        head[a]=a;
    }
    for(int a=1;a<=m;a++){
        int from,go,nak;
        scanf("%d %d %d",&from,&go,&nak);
        total+=nak;
        vec.push_back({nak,{from,go}});
    }
    //printf("total==%d\n",total);
    sort(vec.rbegin(),vec.rend());
    for(int a=0;a< vec.size();a++){
        int fh1=findhead(vec[a].second.first);
        int fh2=findhead(vec[a].second.second);
        if(fh1 != fh2){
            head[fh1]=fh2;
            total-=vec[a].first;
        }
    }
    printf("%d\n",total);
    vec.clear();
}

return 0;}
/*
1
6 7
1 2 1
2 3 2
1 4 3
4 5 4
5 6 5
6 3 6
5 2 7
*/
