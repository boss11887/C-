#include <bits/stdc++.h>
using namespace std;
map<int,int> m[1005];
vector<int> vec[1005];
queue<int > q;
/*
5 7 1
1 5
1 2 9
1 4 1
2 4 1
2 5 10
3 2 2
4 3 2
4 5 2
*/
int main(){
int n,row,t;
int st,ed;
scanf("%d %d %d",&n,&row,&t);
scanf("%d %d",&st,&ed);
for(int a=1;a<=row;a++){
    int f,g,val;
    scanf("%d %d %d",&f,&g,&val);
    m[f][g]=val;
    vec[f].push_back(g);
    //printf("....-%d %d %d-\n",f,g,val);
}
q.push(st);
printf("**%d**",vec[q.front()][0]);
while(!q.empty()){
    int now=q.front();
    for(auto it=vec[now].begin(); it!=vec[now].end(); it++ ){
        printf("-%d- ",*it);
        printf("%d ",m[now][*it]);
    }
    q.pop();
}
return 0;}
