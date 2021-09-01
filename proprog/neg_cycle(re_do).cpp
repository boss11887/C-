#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int> > vec(2005);
int mindis[1005];


int main(){
int qq;
scanf("%d",&qq);
while(qq--){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=0;a<m;a++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        //printf("%d %d %d %d\n",a,u,v,w);
        vec[a]={{u,v},w};
    }
    for(int a=0;a<n;a++){
        mindis[a]=0;
    }
    for(int b=1;b<n;b++){
        for(int a=0;a<m;a++){
            int from=vec[a].first.first;
            int go=vec[a].first.second;
            int nak=vec[a].second;
            if(mindis[from]+nak<mindis[go]){
                mindis[go]=mindis[from]+nak;
                //printf("%d %d\n",go,mindis[go]);
            }
        }
    }
    bool jue=false;
    for(int a=0;a<m;a++){
        int from=vec[a].first.first;
        int go=vec[a].first.second;
        int nak=vec[a].second;
        if(mindis[from]+nak<mindis[go]){
            mindis[go]=mindis[from]+nak;
            jue=true;
            break;
        }
    }
    if(jue==true){
        printf("possible\n");
    }else{
        printf("not possible\n");
    }
    vec.clear();
}

return 0;}
