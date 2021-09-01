#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int ar[1005][1005];
char f[1005],s[1005];

int main(){
    scanf("%s %s",f,s);
    s1=f;
    s2=s;
    int flong=s1.size();
    int slong=s2.size();
    printf("flong = %d slong = %d\n",flong,slong);
    for(int a=0;a<=slong;a++){
        ar[0][a]=a;
        //printf("%d ",ar[0][a]);
    }
    for(int a=0;a<=flong;a++){
        ar[a][0]=a;
       // pirntf("%d ",a);
    }
    //printf("-->%d",ar[0][7]);
    //printf("\n");
    for(int a=1;a<=flong;a++){
        for(int b=1;b<=slong;b++){
            int now;
            if(f[a-1]==s[b-1]){
                now=0;
            }else{
                now=1;
            }
            int low=min(ar[a][b-1]+1,ar[a-1][b]+1);
            ar[a][b]=min(low,ar[a-1][b-1]+now);
            //printf("%d ",ar[a][b]);
        }
        //printf("\n");
    }
    for(int a=0;a<=flong;a++){
        for(int b=0;b<=slong;b++){
            printf("%d ",ar[a][b]);
        }
        printf("\n");
    }
    printf("ans=%d",ar[flong][slong]);
return 0;}

/*
sitting
kitten
*/
