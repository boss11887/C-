#include <bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > vec;
vector<pair<int,pair<int,int> > > mv;
int head[105];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}
int main(){
    int cnt=1;
    while(1){
        int n,m,p;
        scanf("%d %d %d",&n,&m,&p);
        if(n==0){
            break;
        }
        if(cnt != 1){
            printf("\n");
        }
        for(int a=1;a<=m;a++){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            vec.push_back({w,{u,v}});
        }
        sort(vec.begin(),vec.end());
        printf("Case #%d\n",cnt);
        while(p--){
            bool jue=false;
            mv=vec;
            int st,ed;
            scanf("%d %d",&st,&ed);
            for(int a=1;a<=n;a++){
                head[a]=a;
            }
            for(int a=0;a<mv.size();a++){
                int from=vec[a].second.first;
                int go=vec[a].second.second;
                int nak=vec[a].first;
                int h1=findhead(from);
                int h2=findhead(go);
                if(head[h1] != head[h2]){
                    head[h1]=head[h2];
                }
                if(head[findhead(st)]==head[findhead(ed)]){
                    jue=true;
                    printf("%d\n",nak);
                    break;
                }
            }
            if(jue==false){
                printf("no path\n");
            }
        }
        cnt++;
        vec.clear();
    }

return 0;}
