#include <cstdio>

float abs(float a){
	if(a<=0)
		return -a;
		return a;	
}


int mul(int a, int b){
	a*=b;
	return(a);
}

int main(){
	int a, b;
	scanf("%d %d",&a, &b);
	printf("%d",mul(a,b));
	return 0;
}
