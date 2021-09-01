#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back(chua);
    }
    sort(vec.begin(),vec.end());
    int val=1;
    for(int a=1;a<=n;a++){
        vec[a]-=val;
        val++;
    }
    for(int a=1;a<=m;a++){
        int chua;
        scanf("%d",&chua);
        int pos=upper_bound(vec.begin(),vec.end(),chua)-vec.begin();
        printf("%d ",chua+pos);
    }
return 0;}
