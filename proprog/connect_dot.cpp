#include <bits/stdc++.h>
using namespace std;
queue<float> q;
pair<float,float> tua[105];
float ar[105][105];
float total=0;
char null;

int main(){
int t;
scanf("%d",&t);
while(t--){
    int n;
    scanf("%c",&null);
    scanf("%d",&n);
    //printf("*%d",n);
    for(int a=1;a<=n;a++){
    scanf("%f %f",&tua[a].first,&tua[a].second);
    //printf("%.2f %.2f",tua[a].first,tua[a].second);
    }
    total=0;
    for(int a=1;a<n;a++){
        float low=1e8;
        for(int b=a+1;b<=n;b++){
            float y=abs(tua[b].second-tua[a].second);
            float x=abs(tua[b].first-tua[a].first);
            float ans=sqrt(x*x+y*y);
            if(ans < low){
                low=ans;
            }
        }
        //printf("%.2f\n",low);
        total+=low;

    }
    /*printf("%.2f",total);
    if(t != 1){
        printf("\n");
    }*/
    q.push(total);
}
while(!q.empty()){
    printf("%.2f\n",q.front());
    q.pop();
}


return 0;}




