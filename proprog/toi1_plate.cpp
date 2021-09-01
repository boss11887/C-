#include <bits/stdc++.h>
using namespace std;
queue<int> q[15];
queue<int> nf;
int iq[15];
int ar[10005];

int main(){
int chan,n;
scanf("%d %d",&chan,&n);
for(int a=1;a<=n;a++){
    int id,hong;
    scanf("%d %d",&hong,&id);
    ar[id]=hong;
}
while(1){
    char s;
    scanf("%c",&s);
    if(s=='X'){
        break;
    }
    if(s=='E'){
        int nowid;
        scanf("%d",&nowid);
        int nowclass=ar[nowid];
        if(iq[nowclass]==0){
            nf.push(nowclass);
            iq[nowclass]=1;
        }
        q[nowclass].push(nowid);
    }
    if(s=='D'){
        int wantclass=nf.front();
        printf("%d\n",q[wantclass].front());
        q[wantclass].pop();
            if(q[wantclass].empty()){
                nf.pop();
                iq[wantclass]=0;
            }
    }
}
printf("0");
return 0;}
