#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

int main()
{
    tree<int,         /* key                */
         null_type,   /* mapped             */
         less<int>,   /* compare function   */
         rb_tree_tag, /* red-black tree tag */
         tree_order_statistics_node_update> tr;

    for(int i = 0; i < 20; ++i)
        tr.insert(i);

    /* number of elements in the range [3, 10) */
    cout << tr.order_of_key(10) - tr.order_of_key(3);
}
