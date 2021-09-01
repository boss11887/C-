#include <bits/stdc++.h>
char s[10005];

int main(){
    gets(s);
    long long total=0;
    int nub=0;
    int now;
    for(int a=0;s[a] != '\0';a++){
        if(s[a]==','){
            total=0;
            now=0;
            nub=0;
            continue;
        }
        if(s[a]>='A'){
            s[a]-=7;
        }
        nub++;
        now=s[a];
        s[a]-=48;
        now=s[a];
        total*=16;
        total+=now;
        if(nub%4==0 && nub != 0){
            if(total >= 32 && total <= 127){
                printf("BASIC LATIN\n");
            }else if(total >= 1536 && total <= 1791){
                printf("ARABIC\n");
            }else if(total >= 3584 && total <= 3711){
                printf("THAI\n");
            }else if(total >= 3712 && total <= 3839){
                printf("LAO\n");
            }else if(total >= 12352 && total <= 12447){
                printf("HIRAGANA\n");
            }else if(total >= 12448 && total <= 12543){
                printf("KATAKANA\n");
            }else{
                printf("UNKNOWN\n");
            }
        }
    }

return 0;}
