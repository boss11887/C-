#include <cstdio>

int main(){
	int a, f;
	int n[15];
	for(int b=0; b<15;++b){
		scanf("%d", &n[b]);
	}
	a=0;
	for(int p=1; p<15;p++){
	
	for(int c=0;c<14;++c){
	if(n[c]>n[c+1]){
		f = n[c] ;
		n[c] = n[c+1];
		n[c+1] = f;
	}}}
	
	
	
	for(int b=0; b<15;++b){
		printf("%d ",n[a]);
		a++;
	}
}
