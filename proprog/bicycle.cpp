#include <bits/stdc++.h>
using namespace std;
vector<int> vec[10005];
queue<int> q;
queue<int> topo;
long long mm=1000000000;
long long head[10005];

int main(){
int n,m;
//long long val=1234567;
//printf("%.9lld",val);
scanf("%d %d",&n,&m);
for(int a=1;a<=m;a++){
    int x,y;
    scanf("%d %d",&x,&y);
    vec[x].push_back(y);
    head[y]++;
}
q.push(1);
topo.push(1);
//printf("==%d",head[4]);
while(!q.empty()){
    int now=q.front();
    q.pop();
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a];
        head[vec[now][a]]--;
        if(head[go]==0){
            topo.push(go);
            q.push(go);
        }
    }
}
bool jue=false;
memset(head,0,sizeof(head));
head[1]=1;
while(!topo.empty()){
    int now=topo.front();
    printf("== %d\n",now);
    topo.pop();
    for(int a=0;a<vec[now].size();a++){
        int go=vec[now][a];
        //head[now]%=mm;
        head[go]+=head[now];
        //printf("%d\n",head[go]);
        if(head[go]>=mm){
            jue=true;
        }
        head[go]%=mm;
    }
}

if(jue){
printf("%09lld",head[2]);
}else{
printf("%lld",head[2]);
}

//printf("%lld",head[2]);
return 0;}
/*
31 60
1 3
1 3
3 4
3 4
4 5
4 5
5 6
5 6
6 7
6 7
7 8
7 8
8 9
8 9
9 10
9 10
10 11
10 11
11 12
11 12
12 13
12 13
13 14
13 14
14 15
14 15
15 16
15 16
16 17
16 17
17 18
17 18
18 19
18 19
19 20
19 20
20 21
20 21
21 22
21 22
22 23
22 23
23 24
23 24
24 25
24 25
25 26
25 26
26 27
26 27
27 28
27 28
28 29
28 29
29 30
29 30
30 31
30 31
31 2
31 2



20 32
3 12
4 3
16 14
18 6
15 16
13 11
6 4
10 20
1 15
15 17
13 20
16 14
18 19
17 8
1 16
16 14
6 9
19 4
4 5
13 18
12 7
7 2
12 7
17 16
8 3
9 10
20 11
19 4
10 13
13 11
3 2
16 8
*/
