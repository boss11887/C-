#include <bits/stdc++.h>
using namespace std;
int ar[105];
int q=0;
char f[10005],s[10005];

int main(){
int n;
int aow=0;
scanf("%d %s %s",&n,f,s);
for(int a=0;a<n;a++){
    if(f[a]=='?'){
        q++;
    }else{
        ar[f[a]-'a']++;
        aow++;
    }
}
int ans=0;
int nub2=0;
for(int a=0;a<n;a++){
    if(s[a]=='?' && aow>1){
        ans++;
        aow--;
    }else{
        nub2++;
        if(ar[s[a]-'a'] >=1){
            ans++;
            ar[s[a]-'a']--;
        }
    }
}
//printf("%d %d--",q,nub2);
while(q>=1 && nub2 >=1){
    q--;
    nub2--;
    ans++;
}
printf("%d",ans);
return 0;}
