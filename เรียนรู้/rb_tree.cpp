#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> mytree;
mytree mt;

int main(){
for(int a=1;a<=10;a++){
mt.insert(a);
}
printf("%d ",mt.order_of_key(1));
printf("%d ",*mt.count(1));

}
