#include <cstdio>

int n,a,dt[4],chk[30];

using namespace std;
void gen(int lv)
{
	if(lv == n)
	{
		for(a=0;a<n;a++){
		printf("%d",dt[a]);
		}
		printf("\n");
		return;
	}
	
	dt[lv]=0;
	gen(lv+1);
	dt[lv]=1;
	gen(lv+1);
}

int main(){
	scanf("%d",&n);
	gen(0);
}
