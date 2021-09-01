#include <cstdio>
int n;
char s[100005];
int nub=0;
int main(){
scanf("%d\n",&n);
gets(s);
//printf("%d\n%s",n,s);
n--;
for(int a=0;a<=n;a++){
    if(s[a]=='S' && s[a+1]=='P' && s[a+2]=='A' && s[a+3]=='C' && s[a+4]=='E' && s[a+5]=='B' && s[a+6]=='A' && s[a+7]=='R'){

    nub++;
    a+=7;

    }else if(s[a]=='S' && s[a+1]=='H' && s[a+2]=='I' && s[a+3]=='F' && s[a+4]=='T'){

    nub++;
    a+=4;

    }else if(s[a]=='Q' || s[a]=='W' || s[a]=='E' || s[a]=='A' || s[a]=='S' || s[a]=='D' || s[a]=='V'){

    nub++;

    }
}

printf("%d",nub);

return 0;}
