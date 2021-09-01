#include <bits/stdc++.h>
using namespace std;
queue<float> q;
char s[100];
int head[105];
pair<float,float> val[105];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a] = findhead(head[a]);
}

float abs(float a){
    if(a < 0)
        return -a;
    return a;
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
        scanf("%f %f",&val[a].first,&val[a].second);
        //printf("%.2f %.2f",val[a].first,val[a].second);
    }
    float sum=0;
    for(int a=1;a<=n;a++){
        float high=1e6;
        int posb,posa;
        for(int b=1;b<=n;b++){
            if(a==b){
                continue;
            }
            float y=std::abs(val[b].second-val[a].second);
            float x=std::abs(val[b].first-val[a].first);
            float total=x*x+y*y;
            total = sqrt(total);
            //printf("%.2f\n",total);
            if(total < high){
                int heada=findhead(a);
                int headb=findhead(b);
                //printf("%d %d***%d %d\n",a,b,heada,headb);
                if(heada != headb){
                high=total;
                posa=a;
                posb=b;
                //printf("%d %d**%.2f\n",a,b,total);
                }
            }
        }
        if(high != 1e6){
        posa=findhead(posa);
        posb=findhead(posb);
        head[posb] = head[posa];
        //printf("%d %d\n",posa,posb);
        sum+=high;
        //printf("%d %.2f\n",a,high);
            printf("%d %d %d\n",head[1],head[2],head[3]);
        }
    }
    q.push(sum);
}

while(!q.empty()){
    printf("%.2f",q.front());
    q.pop();
    if(!q.empty()){
        printf("\n\n");
    }
}


return 0;}


/*2

3
1.0 1.0
2.0 2.0
2.0 4.0

5
1.0 1.0
1.0 2.0
1.0 3.0
1.0 4.0
1.0 5.0*/

/*
1

3
1 1
8 9
8 8
*/
