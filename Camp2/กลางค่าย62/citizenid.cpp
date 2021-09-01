#include <bits/stdc++.h>
char s[100];

int main(){
gets(s);
int total=0;
for(int a=0;a<=9;a++){
    int now=s[a];
    if(s[a] >= 'A' && s[a] <= 'Z'){
        now=now-'A'+1;
    }else{
        now=now-'0';
    }
    //printf("%d ",now);
    total+=now;
}
int ans=s[10];
if(s[10] >= 'A' && s[10] <= 'Z'){
    ans=ans-'A';
    }else{
    ans=ans-'0';
}
if(ans<=1){
    ans=1-ans;
}else{
    ans=11-ans;
}
if(total%11==ans){
    printf("T ");
}else{
    printf("F ");
}
printf("%d",total);
return 0;}
