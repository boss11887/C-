#include <cstdio>

int main(){
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
			printf("leap year");
				}else{
				printf("not leap year");
			}
			}else{
			printf("leap year");
		}}else{
		printf("not leap year");
}}
