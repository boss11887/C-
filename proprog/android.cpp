#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int ar[1005];
int use[1005];

int main(){
int n,m,mem;
int now=0;
scanf("%d %d %d",&n,&m,&mem);
for(int a=1;a<=n;a++){
    scanf("%d",&ar[a]);
}
memset(use,-1,sizeof(use));

for(int a=1;a<=m;a++){
    int chua;
    scanf("%d",&chua);
    //printf("%d",use[chua]);
    if(use[chua] != -1){
        //printf("***");
        use[chua]=a;
        continue;
    }
    use[chua]=a;
    if(now+ar[chua] <= mem){
        now+=ar[chua];
    }else{
        int low=1e8,pos;
        for(int a=1;a<=n;a++){
            if(use[a] != -1){
                low=use[a];
                pos=a;
                vec.push_back({low,pos});
                //printf("//%d %d//",pos,low);
            }
        }
        //printf("**%d",pos);
        sort(vec.begin(),vec.end());
        for(int c=0;c<vec.size();c++){
            //printf("..%d(%d).. ",ar[vec[c].second],vec[c].first);
            now-=ar[vec[c].second];
            use[vec[c].second]=-1;
            //printf("now=%d  ",now);
            if(now+ar[chua] <= mem){
                break;
            }
        }
        vec.clear();
        now+=ar[chua];
        //printf("**%d\n",now);
    }
    //printf("%d ",now);
}
printf("%d",mem-now);

return 0;}
