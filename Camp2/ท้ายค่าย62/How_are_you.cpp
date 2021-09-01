#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> um(2000000);
vector<int> vec[100000];

int main(){
    //freopen("myoutput.txt","w",stdout);
int n;
scanf("%d",&n);
int high=0;

for(int a=1;a<=n;a++){
    int u;
    scanf("%d",&u);
    if(u==1){
        int chua;
        scanf("%d",&chua);
        um[chua]++;
        if(um[chua]> high){
            high=um[chua];
            vec[high].push_back(chua);
        }else{
            vec[um[chua]].push_back(chua);
        }
    }else{
        int want,t;
        scanf("%d %d",&want,&t);
        printf("%d\n",um[want]);
        int cnt=0;
        if(t<100000){
        for(int b=0;b<vec[t].size();b++){
            int now=vec[t][b];
            if(um[now]==t){
                //printf("***%d ",now);
                cnt++;
            }
        }
        if(cnt !=0){
        printf("%d ",cnt);
        }else{
        printf("0");
        }
        if(cnt<=5){
        sort(vec[t].begin(),vec[t].end());
        for(int b=0;b<vec[t].size();b++){
            int now=vec[t][b];
            if(um[now]==t){
                printf("%d ",now);
                //cnt++;
            }
        }
        }
        }else{
        printf("0");
        }
        printf("\n");
        if(vec[high].size()==0){
            printf("0");
        }else{
        printf("%d ",vec[high].size());
        }
        if(vec[high].size()<=5){
        sort(vec[high].begin(),vec[high].end());
        for(int b=0;b<vec[high].size();b++){
            int now=vec[high][b];
            printf("%d ",now);
        }
        }
        printf("\n");
    }
}


return 0;}


/*
15
1 5
1 4
1 3
1 1
1 4
1 5
2 5 1
1 4
2 5 1
2 1 5
2 2 3
1 2
2 2 3
1 4
2 2 3
*/


/*
16
2 1 10000
1 1
1 2
1 3
1 4
1 5
2 1 1
1 6
2 1 1
1 1
1 1
1 1
1 1
2 1 1
1 1
2 1 1
*/
