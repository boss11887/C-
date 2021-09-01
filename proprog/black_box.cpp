#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> mt;
mt t;
int ar[50000];
int aow[50000];
int main(){
int q;
scanf("%d",&q);
for(int www=1;www<=q;www++){
    if(www!=1){
        printf("\n");
    }
    int n,m;
    scanf("%d %d",&n,&m);
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    int high=0;
    for(int a=1;a<=m;a++){
        scanf("%d",&aow[a]);
        high=max(high,aow[a]);
    }
    int pos=1;
    for(int a=1;a<=high;a++){
        t.insert(ar[a]);
        while(aow[pos]==a){
            printf("%d\n",*t.find_by_order(pos-1));
            pos++;
        }
    }
    t.clear();
}
return 0;}
