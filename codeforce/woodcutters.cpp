#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int> > vec;

int main(){
scanf("%d",&n);
if(n==1){
    printf("1");
    return 0;
}
for(int a=1;a<=n;a++){
    int pos,len;
    scanf("%d %d",&pos,&len);
    vec.push_back({pos,len});
}
int ans=2;
int use=vec[0].first;
for(int a=1;a<n-1;a++){
    int pos=vec[a].first;
    int len=vec[a].second;
    if(pos-len > use){
        ans++;
        use=pos;
    }else if(pos+len < vec[a+1].first){
        use=pos+len;
        ans++;
    }
    use=max(use,pos);
}
printf("%d",ans);
return 0;}
