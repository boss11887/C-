#include <bits/stdc++.h>
using namespace std;
queue<int> q;
queue<int> ans;
int ll;
//vector<int> vec[30];
int deg[30];
int ar[30][30];

int main(){
int n;
int cnt=0;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    char f,s,cc[10];
    scanf("%s",cc);
    sscanf(cc,"%c%c",&f,&s);
    //printf("%c%c\n",f,s);
    f-='A'-1;
    s-='A'-1;
    if(ar[f]==0){
        cnt++;
    }
    if(ar[s]==0){
        cnt++;
    }
    ar[f][s]++;
    ar[s][f]++;
    deg[f]++;
    deg[s]++;
    //printf("%d %d\n",f,s);
}
bool jue=0;
bool even=true;
for(int a=1;a<=26;a++){
    if(deg[a]%2==1){
        even=false;
        if(jue==0){
        q.push(a);
        ans.push(a);
        jue=1;
        }else{
        ll=a;
        }
    }
}
if(even){
    for(int a=1;a<=26;a++){
    if(deg[a]>0){
        q.push(a);
        ans.push(a);
        ll=a;
        break;
    }
    }
}
while(!q.empty()){
    int now=q.front();
    q.pop();
    for(int a=26;a>=1;a--){
        if(deg[a]>1&& deg[now]>=1 && ar[now][a]>=1){
            deg[a]--;
            deg[now]--;
            ar[a][now]--;
            ar[now][a]--;
            q.push(a);
            ans.push(a);
            break;
        }else if(deg[a]>=1 && deg[now]>=1 && ar[now][a]>=1&& ans.size()==n){
            ans.push(a);
            break;
        }
    }
}
while(!ans.empty()){
    printf("%c ",ans.front()+'A'-1);
    ans.pop();
}
    //printf("%c",ll+'A'-1);
return 0;}
/*
8
AB
BC
CE
ED
DA
AC
BD
DC
*/
/*
9
AB
BD
DC
AC
AB
BD
DC
AC
AD
*/
/*
4
AC
BC
BD
BA
*/
/*
8
AA
AB
BA
BT
TA
TA
BT
AB
*/
