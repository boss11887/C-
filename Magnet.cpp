#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int>::iterator it;
int main(){
int n,m,s;
scanf("%d %d %d",&n,&m,&s);
for(int a=1;a<=m;a++){
    int u,v;
    scanf("%d %d",&u,&v);
    //it=find(vec.begin(),vec.end(),u);
    it = find(vec.begin(),vec.end(), u);
    if (it != vec.end()){
        vec.erase(it);
    }else{
        vec.push_back(u);
    }
    it = find(vec.begin(),vec.end(), u+v);
    if (it != vec.end()){
        vec.erase(it);
    }else{
        vec.push_back(u+v);
    }
    //printf("(%d %d)",u,u+v);
}
it = find(vec.begin(),vec.end(), 1);
    if (it == vec.end()){
        vec.push_back(1);
    }
it = find(vec.begin(),vec.end(), n);
    if (it == vec.end()){
        vec.push_back(n);
    }
sort(vec.begin(),vec.end());

for(int a=0;a<vec.size();a++){
    //printf("%d ",vec[a]);
}
for(int a=1;a<=s;a++){
    int q;
    scanf("%d",&q);
    int low=lower_bound(vec.begin(),vec.end(),q)-vec.begin();
    int high=upper_bound(vec.begin(),vec.end(),q)-vec.begin();

    if(high==low){
        low--;
    }

    printf("%d\n",vec[high]-vec[low]);
}
return 0;}
