#include <bits/stdc++.h>
using namespace std;
vector<pair<double,pair<int,int> > > vec;
pair<double,double> ar[105];
queue<double> q;
int head[105];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(a);
}

int main(){
int n;
scanf("%d",&n);
while(n--){
    int m;
    scanf("%d",&m);
    double fo,so;
    for(int a=1;a<=m;a++){
        scanf("%lf %lf",&fo,&so);
        ar[a]={fo,so};
        //printf("%.2f",ar[a].first);
    }
    for(int a=1;a<=m;a++){
        head[a]=a;
    }
    for(int a=1;a<=m;a++){
        for(int b=a+1;b<=m;b++){
            double disx=ar[a].first-ar[b].first;
            double disy=ar[a].second-ar[b].second;
            double ne=disx*disx+disy*disy;
            double cnt=sqrt(ne);
            vec.push_back({-cnt,{a,b}});
            //printf("--%.2f\n",cnt);
        }
    }
    //printf("**%d",vec.size());
    sort(vec.begin(),vec.end());
    /*while(!vec.empty()){
        printf("//%d\n",vec.back().first);
        vec.pop_back();
    }*/
    double total=0;
    int use=1;
    while(!vec.empty()){
        int h1=findhead(vec.back().second.first);
        int h2=findhead(vec.back().second.second);
        if(h1 != h2){
            use++;
            head[h1]=head[h2];
            total+=-vec.back().first;
            //printf("**%d",total);
            if(use==m){
                break;
            }
        }
        vec.pop_back();
    }
    q.push(total);
    while(!vec.empty()){
        vec.pop_back();
    }
}

while(!q.empty()){
    printf("%.2f",q.front());
    q.pop();
    if(!q.empty()){
        printf("\n\n");
    }
}


printf("\n");

return 0;}


/*

3

3
1000.0 1.0
1000.0 2.0
1000.0 4.0

3
1.0 1.0
1.0 1.0
1.0 1.0

3
1000.0 1.0
1000.0 2.0
1000.0 4.0

*/
