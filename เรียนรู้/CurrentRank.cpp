#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> mt;
mt t;

int main(){
int n;
scanf("%d",&n);
while(n--){
    int u,v;
    scanf("%d %d",&u,&v);
    if(u==1){
        t.insert(v);
    }else{
        printf("%d\n",t.order_of_key(v)+1);
    }
}
}
