#include <bits/stdc++.h>
using namespace std;
int dp[100005],visit[100005];
vector<pair<int,int> > vec[100005];
queue<pair<int,int> > q;


void dfs(int u,int p){
	for(auto v : vec[u]){
        printf("%d %d\n",v.first,p);
            if(v.first != p){
			dp[v.first]=dp[u] ^ v.second;
			dfs(v.first,u);
		}
	}


}

int main(){
	int n,m;
	dp[1]=0;
	scanf("%d %d",&n,&m);
	for(int a=1;a<n;a++){
		int u,v,w;
		scanf("%d %d %d",&u,&v,&w);
		vec[u].push_back({v,w});
		vec[v].push_back({u,w});
	}

	dfs(1,0);

	for(int a=1;a<=m;a++){
		int from,go;
		scanf("%d %d",&from,&go);
		printf("%d\n",dp[from] ^ dp[go]);
	}


return 0;}
