#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    int r,c;
    scanf("%d %d",&r,&c);
    vec.push_back({r,c});
}
int yao=vec.size();
for(int a=1;a<=m;a++){
    int r,c,k;
    scanf("%d %d %d",&r,&c,&k);
    int str=r-k;
    int edr=r+k;
    int stc=c-k;
    int edc=c+k;
    int i=0;
    int nub=0;
    while(i < yao){
        if(vec[i].first >= str && vec[i].first <= edr && vec[i].second >= stc && vec[i].second <= edc){
            nub++;
            swap(vec[i],vec[yao-1]);
            yao--;
        }else{
            i++;
        }
    }
    //printf("***%d***",vec.size());
    printf("%d\n",nub);
}
return 0;}
