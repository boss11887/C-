#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
char s[200],want[200];
int n;
scanf("%s",want);
s1=want;
scanf("%d ",&n);
while(n--){
    scanf("%s",s);
    s2=s;
    int pos=0;
    bool jue=false;
    for(int a=0;a<s2.size();a++){
        if(want[pos]==s[a]){
            pos++;
        }
    }
    if(pos>=s1.size()){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}
return 0;}
