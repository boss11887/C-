#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
unordered_map<int,int> um;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> mt;
mt t;
int main(){
    int n;
    scanf("%d",&n);
    char s[10];
    t.insert(1e9);
    while(n--){
        int chua;
        scanf("%s %d",s,&chua);
        if(s[0]=='I'){
            t.insert(chua);
            um[chua]++;
        }else if(s[0]=='R'){
            t.erase(t.upper_bound(chua));
            um[chua]--;
        }else if(s[0]=='F'){
            int m=*t.upper_bound(chua);
            int aow=*t.lower_bound(chua);
            if(m==chua){
                printf("==Y %d\n",um[chua]);
            }else{
                printf("==N\n",m);
            }
        }else if(s[0]=='P'){
            int last=*t.find_by_order(0);
            int nub=0;
            for(int a=0;a<t.size();a++){
                int now=*t.find_by_order(a);
                if(now!=last){
                printf("%d(%d) ",last,nub);
                nub=1;
                }else{
                nub++;
                }
                last=now;
            }
            printf("\n");
        }
    }

}
/*
15
I 5
I 7
I 5
I 3
R 5
R 3
I 2
I 2
I 5
F 5
F 3
F 7
F 2
F 1
P 1
*/

