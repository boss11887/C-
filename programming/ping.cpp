#include<bits/stdc++.h>
#define int long long
using namespace std;
deque <int> v,vv;
int n,m,temp,j,k,cnt;
main()
{
    scanf("%d %d",&n,&m);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&temp);
        v.push_back(temp);
    }
    for(j=1;j<=m;j++)
    {
        scanf("%d",&temp);
        vv.push_back(temp);
    }
    sort(vv.rbegin(),vv.rend());
    for(j=0;j<vv.size();j++)
    {
        v.push_front(vv[j]);
    }

    for(j=0;j<v.size();j++)
    {
        printf("%d ",v[j]);
    }

    for(j=0;j<v.size();j++)
    {
        for(k=0;k<v.size()-1;k++)
        {
            if(v[k]<v[k+1])
            {
                swap(v[k],v[k+1]);
                cnt++;
            }
        }
    }
    printf("\n%d",cnt);
}
