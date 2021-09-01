#include <cstdio>
#include <vector>
#include <queue>
int lfnow[12000],x;

int main(){
    int chan,totallift;
scanf("%d %d",&chan,&totallift);

while(totallift--){
    scanf("%d",&x);
    lfnow[x]++;
}
int up,down;
int n;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    int first,second;
    scanf("%d %d",&first,&second);
    if(lfnow[first]>=1){
        lfnow[first]--;
        lfnow[second]++;
        printf("%d\n",first);
    }else{
        up=first;
        down=first;
        while(1){
            up++;
            if(lfnow[up]>=1){
                lfnow[up]--;
                lfnow[second]++;
                printf("%d\n",up);
                break;
            }
            down--;
            if(down<1){
                continue;
            }
            if(lfnow[down]>=1){
                lfnow[down]--;
                lfnow[second]++;
                printf("%d\n",down);
                break;
            }
        }



    }
}


return 0;}
