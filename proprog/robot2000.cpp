#include <bits/stdc++.h>
char s[1005];

int main(){
gets(s);
int han=1;
int now;
for(int a=0;s[a]!='\0';a++){
    while(1){
        if(s[a] == 'N'){
            now=1;
        }
        if(s[a] == 'E'){
            now=2;
        }
        if(s[a] == 'S'){
            now=3;
        }
        if(s[a] == 'W'){
            now=4;
        }
        if(s[a]=='Z'){
            printf("Z");
            han=1;
            break;
        }
        if(now!=han){
            han++;
            printf("R");
            if(han==5){
                han=1;
            }
        }else{
            printf("F");
            break;
        }
    }
}

return 0;}
