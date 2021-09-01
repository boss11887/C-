#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
int n;
scanf("%d",&n);
bool jue=false;
while(n--){
    int u,v;
    scanf("%d %d",&u,&v);
    if(u==1){
        vec.push_back(v);
        jue=true;
    }else{
        if(jue==true){
        sort(vec.begin(),vec.end());
        jue=false;
        }
        printf("%d\n",lower_bound(vec.begin(),vec.end(),v)-vec.begin()+1);
    }
}

return 0;}
