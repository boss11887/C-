#include <bits/stdc++.h>

int main(){
int n;
char s[100005];
scanf("%d %s",&n,s);
int cnt=0;
for(int a=0;a<n-10;a++){
    if(s[a]=='8'){
        cnt++;
    }
}
int want=n-9;
want/=2;
if(cnt>=want){
    printf("YES");
}else{
    printf("NO");
}
return 0;}
