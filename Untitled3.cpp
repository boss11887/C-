#include <cstdio>

int ab(int a){	
		if(a<=0)
		return -a;
		return a;	
}

int main(){
	int n;
	scanf("%d", &n);
	for(int a=1;a<=2*n-1;++a){
		for(int b=1;b<=2*n-1;b++){
			if(ab(a-n)+ab(b-n)<=n-1)
				printf("*");
			else
				printf(" ");	
		}
		printf("\n");
	}
}

