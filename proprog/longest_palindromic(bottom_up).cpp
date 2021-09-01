#include <bits/stdc++.h>
using namespace std;
string ms;
int ar[505][505];
char fc[505],sc[505];
char rc[1005];
int fl,sl;

int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        scanf("%s",rc);
        ms=rc;
        int yao=ms.size();
        int half=yao/2;
        for(int b=0;b<half;b++){
            fc[b+2]=rc[b];
        }
        for(int b=yao-1;b<yao;b++){
            sc[b-half]=rc[b];
        }
        /*
        for(int b=0;b<=half+1;b++){
            ar[0][b]=1;
            ar[b][0]=1;
        }
        */
        fl=half;
        sl=yao-half;
        printf("%d %d**\n",fl,sl);
        for(int b=0;b<=fl;b++){
            for(int c=0;c<=sl;c++){

            }
        }
    }

return 0;}
