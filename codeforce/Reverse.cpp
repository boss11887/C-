#include <bits/stdc++.h>
char s[300005];

int main(){
int n;
scanf("%d",&n);
scanf("%s",&s);
for(int a=1;a<n;a++){
    if(s[a]<s[a-1]){
        printf("YES");
        printf("\n%d %d",a,a+1);
        return 0;
    }
}
printf("NO");
return 0;}
