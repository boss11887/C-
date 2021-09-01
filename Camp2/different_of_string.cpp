#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int far[1005],sar[1005];
int main(){
    char fc[1005],sc[1005];
    scanf("%s %s",fc,sc);
    s1=fc;
    s2=sc;
    int fyao=s1.size();
    int syao=s2.size();
    if(fyao != syao){
        printf("different length");
        return 0;
    }
    bool muang=true;
    for(int a=1;a<fyao;a++){
        far[a]=fc[a]-fc[a-1];
        sar[a]=sc[a]-sc[a-1];
        if(far[a] != sar[a]){
            muang=false;
        }
    }
    if(muang==false){
        printf("difference\n");
        for(int a=1;a<fyao;a++){
            printf("%d ",far[a]);
        }
        printf("\n");
        for(int a=1;a<fyao;a++){
            printf("%d ",sar[a]);
        }
    }else{
        printf("similarity\n");
        for(int a=1;a<fyao;a++){
            printf("%d ",far[a]);
        }
    }
}
