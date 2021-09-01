#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
long long bs[45005];
int ar[105];

int main(){
    //freopen("aa.txt","w",stdout);
    int t;
    int sum=0;
    scanf("%d",&t);
    int tum=t;
    while(t--){
        if(t!=tum-1){
            printf("\n");
        }
        int low=1e9;
        int n;
        sum=0;
        scanf("%d",&n);
        int half=n/2;
        for(int a=1;a<=n;a++){
            scanf("%d",&ar[a]);
            sum+=ar[a];
        }
        bs[0]=1;
        for(int a=1;a<=n;a++){
            for(int b=sum;b>=0;b--){
                if(b+ar[a] <=45000){
                bs[b+ar[a]]|=bs[b]<<(long long)1;
                }
            }
        }
        for(int b=0;b<=45000;b++){
            if(bs[b]&((long long)1<<(long long)half)){
                //printf("%d ",b);
                if(abs(sum-b*2)<low){
                    low=abs(sum-b-b);
                    vec.clear();
                    vec.push_back(b);
                    vec.push_back(sum-b);
                }
            }
            bs[b]=0;
        }
        sort(vec.begin(),vec.end());
        printf("%d %d\n",vec[0],vec[1]);
    }

return 0;}
/*
1
5
1
2
3
4
90
*/
