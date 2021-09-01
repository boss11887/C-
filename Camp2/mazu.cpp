#include <bits/stdc++.h>
using namespace std;
stack<char> stk;
char s[10];
int main(){
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%s",s);
    char now=s[0];
    if(!stk.empty()){
        if(now==stk.top()){
            stk.pop();
        }else{
            stk.push(now);
        }
    }else{
        stk.push(now);
    }
}
printf("%d\n",stk.size());
if(!stk.empty()){
    while(!stk.empty()){
        printf("%c",stk.top());
        stk.pop();
    }
}else{
printf("empty");
}
return 0;}
