#include <cstdio>
int tmp[100000];
int main(){
	int n ,max;
	scanf("%d",&n);
	int arr[1000];
	int dif[1000];
	int count=0;
	for(int a=1;a<=n;a++){
	scanf("%d",&arr[a]);
	if (arr[a]>max){
		max = arr[a];
	}
}
	for(int a=1;a<=n;a++){
		for(int b=1;b<=arr[a];b++){
			printf("%d",b);
			count++;
			tmp[count]=b;
		}
		for(int b=arr[a]-1;b>=1;b--){
			printf("%d",b);
			count++;
			tmp[count]=b;
		}
	}
	printf("\n");
	printf("%d",count);
	printf("\n");
	for(int a=1;a<=count;a++){
	dif[a] =max-tmp[a];
}
for(int a=1;a<=max;a++){
	for(int b=1;b<=count;b++){
		if(dif[b]>0){
			printf(" ");
			dif[b]-=1;
	 }else{
		printf("*");
	}}
	printf("\n");
}
}
