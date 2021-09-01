#include <bits/stdc++.h>
using namespace std;
int aa[1005],bb[100005],cc[1005];
int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
for(int a=1;a<=x;a++){
    scanf("%d",&aa[a]);
}
for(int a=1;a<=y;a++){
    scanf("%d",&bb[a]);
}
for(int a=1;a<=z;a++){
    scanf("%d",&cc[a]);
}
sort(aa+1,aa+x+1);
sort(bb+1,bb+y+1);
sort(cc+1,cc+z+1);
int nub=0;
for(int a=1;a<=z;a++){
    int want=cc[a];
    bool jue=false;
    for(int b=1;b<=x;b++){
        for(int c=1;c<=y;c++){
            int sum=aa[b]+bb[c];
            if(sum==cc[a]){
                jue=true;
                nub++;
                break;
            }else if(sum>=cc[a]){
                break;
            }
        }
        if(jue==true){
            break;
        }
    }
}
printf("%d",nub);
return 0;}
