#include <cstdio>

int n,k,a,dt[22],use[22];

using namespace std;
void gen(int lv)
{
	if(lv == k)
	{
		for(a=0;a<k;a++){
		printf("%d",dt[a]);
		}
		printf("\n");
		return;
	}
	
	for(int i=1;i<=n;i++){ 
		if(use[i]==0){
			dt[lv]=i;
			use[i]=1;
			gen(lv+1);
			use[i]=0;
		}
	}
}

int main(){
	scanf("%d %d",&n,&k);
	gen(0);
}
