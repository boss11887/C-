#include <bits/stdc++.h>
using namespace std;
int head[100005];
int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

long long ar[100005];
int main(){
int n,m;
scanf("%d %d",&n,&m);
for(int a=1;a<=n;a++){
    scanf("%lld",&ar[a]);
    head[a]=a;
}
for(int a=1;a<=m;a++){
    int q,w;
    scanf("%d %d",&q,&w);
    int h1=findhead(q);
    int h2=findhead(w);
    if(h1 != h2){
        if(ar[h1]==ar[h2]){
            if(h1<h2){
                head[h2]=h1;
                ar[h1]+=ar[h2]/2;
                printf("%d\n",h1);
            }else{
                head[h1]=h2;
                ar[h2]+=ar[h1]/2;
                printf("%d\n",h2);
            }
        }else if(ar[h1] > ar[h2]){
            head[h2]=h1;
            ar[h1]+=ar[h2]/2;
            printf("%d\n",h1);
        }else{
            head[h1]=h2;
            ar[h2]+=ar[h1]/2;
            printf("%d\n",h2);
        }
    }else{
        printf("-1\n");
    }
}
return 0;}
