#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>,null_type,less<pair<int,int> > , rb_tree_tag,tree_order_statistics_node_update> mt;
mt t;

int main(){
    for(int a=1;a<=10;a++){
        t.insert({a*10,a*100});
    }
    t.erase(t.lower_bound({10,0}));
    for(int a=1;a<=9;a++){
        pair<int,int> ans=*t.find_by_order(a-1);
        printf("ORDER= {%d,%d}\n",ans.first,ans.second);
    }

return 0;}
