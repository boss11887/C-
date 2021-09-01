#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> um;
char s[1005];
char want[1005];
int main(){
    int cnt=0;
    gets(s);
    bool jaaow=false;
    long long h1=0;
    long long val=1;
    for(int a=0;s[a] != '\0';a++){
        if(um[s[a]]==0){
            um[s[a]]=1;
        }else{
            for(int b=0;b<a;b++){
                h1*=100;
                val*=100;
                h1+=s[b];
                want[b]=s[b];
                cnt++;
                //printf("%d ",cnt);
            }
            jaaow=true;
            break;
        }
        if(jaaow==true){
            break;
        }
    }
    //printf("--%lld",h1);
    long long h2=0;
    int aow=1e8;
    bool jue=false;
    for(int a=cnt;s[a] != '\0';a++){
        h2*=100;
        h2+=s[a];
        bool tum=false;
        if((a+1)%cnt==0){
            //printf("GI--%lld",h2);
            for(int b=cnt;b>0;b--){
                h2*=100;
                h2+=s[a-b+1];
                h2-=s[a-b+1]*val;
                //printf("--%lld  ",h2);
                if(h2==h1){
                    if(aow==1e8 || aow==b-1){
                        aow=b-1;
                        //printf("*%d*",aow);
                        tum=true;
                    }
                }
            }
            if(tum==false){
                printf("INVALID");
                return 0;
            }
            //printf("\n");
            h1=h2;
            h2=0;
        }
        //printf("NOW-%lld",h2);
    }
int ans=min(abs(cnt-aow),aow);
for(int a=0;a<cnt;a++){
    printf("%c",s[a]);
}
printf("\n");
    if(ans==0){
        printf("=");
    }else{
        if(abs(cnt-aow) >= aow){
            printf("< %d",aow);
        }else{
            printf("> %d",abs(cnt-aow));
        }
    }
return 0;}
//   ABCDABCD
