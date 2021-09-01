#include <bits/stdc++.h>
using namespace std;
string ms;

int main(){
    char s[105];
    char want[105];
    scanf("%s",want);
    ms=want;
    int yao=ms.size();
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%s",s);
        int posf=0;
        int nub=0;
        for(int b=0;s[b] != '\0';b++){
            if(s[b]==want[posf]){
                posf++;
                nub++;
            }
        }
        if(nub==yao){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
return 0;}
