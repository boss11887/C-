#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> mytree;
mytree mt;
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int i,val;
    scanf("%d %d",&i,&val);
    if(i==1){
        mt.insert(val);
    }else{
        printf("-------------%d\n",mt.order_of_key(val)+1);
    }
}


return 0;}
/*
30
1 7
1 4
1 6
1 5
1 2
2 7
2 4
1 1
1 3
2 5
2 2
1 12
2 7
1 10
2 12
1 8
1 11
1 9
1 20
2 12
1 16
1 22
1 14
1 18
1 13
1 15
2 16
2 10
2 6
2 14
*/
