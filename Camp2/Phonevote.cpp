#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um(1000000);
int ar[105];

int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int a=1; a<=n; a++)
    {
        int now,votefor;
        scanf("%d %d",&now,&votefor);
        if(um[now] < k)
        {
            um[now]++;
            if(votefor >=1 && votefor <= m)
            {
                ar[votefor]++;
            }
        }
    }
    for(int a=1; a<=m; a++)
    {
        printf("%d\n",ar[a]);
    }

    return 0;
}
