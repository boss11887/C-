#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//unordered_map<int,int> tree;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> mytree;


int main(){
    mytree t;
    t.insert(1);
    t.insert(2);
    t.insert(4);
    t.insert(8);
    t.insert(16);

    t.erase(1);
    t.erase(8);
    printf("%d",*t.find_by_order(1));

    printf("\n%d",t.order_of_key(16));
return 0;}
