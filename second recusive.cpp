#include <cstdio>

int n,a,dt[4];

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
	dt[lv]=lv+1;
	gen(lv+1);
	dt[lv]=lv+1;
	gen(lv+1);
}

int main(){
	scanf("%d",&n);
	gen(0);
}
