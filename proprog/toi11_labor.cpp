#include <bits/stdc++.h>
using namespace std;
int ar[1000001];
int main(){
	long long people,item;
	scanf("%lld %lld",&people,&item);
	for(int a=1;a<=people;a++){
		scanf("%d",&ar[a]);
	}
	long long low=1,max=1e12,ans;
	long long middle,total;
	while(low<=max){
		middle=(max+low)/2;
		total=0;
		for(int a=1;a<=people;a++){
			total+=middle/ar[a];
		}
		if(total>=item){
			max=middle-1;
            ans=middle;
		}else{
			low=middle+1;
		}
	}
printf("%lld",middle);

return 0;
}
