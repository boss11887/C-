#include <bits/stdc++.h>
using namespace std;
queue<int> tum;
queue<int> q;
vector<int> vec[200005];
int visit[200005];
int use[200005];
int jatum[200005];
int  main(){
int n;
int cnt=0;

scanf("%d",&n);
for(int a=1;a<n;a++){
    int from,go;
    scanf("%d %d",&from,&go);
    vec[from].push_back(go);
    vec[go].push_back(from);
    use[go]++;
    use[from]++;
}

printf("%d",ans);
return 0;}
/*
15
6 14
2 6
1 11
14 11
7 1
9 7
4 11
5 3
13 10
3 14
8 13
10 11
12 5
15 4
*/
/*
15
1 6
7 2
14 12
6 10
8 5
13 3
9 14
5 9
12 4
2 11
15 8
4 13
3 1
10 7
*/
