#include <bits/stdc++.h>
using namespace std;
queue<double> q;
char s[100];
int head[105];
pair<double,double> val[105];
deque<pair<double,pair<int,int> > > vec;

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a] = findhead(head[a]);
}


int main(){
int t;
scanf("%d",&t);
while(t--){
    //gets(s);
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        head[a]=a;
    }
    for(int a=1;a<=n;a++){
        scanf("%lf %lf",&val[a].first,&val[a].second);
        //printf("%.2f %.2f",val[a].first,val[a].second);
    }
    double sum=0;
    for(int a=1;a<=n;a++){
        int posb,posa;
        for(int b=a+1;b<=n;b++){
            double y=val[b].second-val[a].second;
            double x=val[b].first-val[a].first;
            double total=x*x+y*y;
            total = sqrt(total);
            //printf("%.2f %d %d\n",total,a,b);
            vec.push_back({total,{a,b}});
        }
    }

    sort(vec.begin(),vec.end());
    n--;
    int tua=0;
    //printf("++%d++",n);
    while(!vec.empty()){
        int posa=vec.front().second.first;
        int posb=vec.front().second.second;
        double ans=vec.front().first;
        posa=findhead(posa);
        posb=findhead(posb);
        //printf("%.2f %d %d\n",ans,posa,posb);
        if(posa != posb){
            head[posa] = head[posb];
            sum=sum+ans;
            tua++;
            //printf("%.2f\n",sum);
            //printf("*%d",tua);
            if(tua == n){
                //printf("--------------");
                break;
            }
        }
        vec.pop_front();
    }
    q.push(sum);
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
