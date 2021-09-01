#include <cstdio>
bool re;

int main(){
int sq,k,r,c,chua,low,total,ans;
scanf("%d %d",&sq,&k);
int n,ifre;
scanf("%d",&n);
ifre=k*2;
while(n--){
    scanf("%d %d",&r,&c);
    chua=r%ifre;
    if(r==c){
        printf("1\n");
        continue;
    }
    if(chua>k||chua==0){
        re=true;
    }else{
        re=false;
    }
    /*if(r<=c){
        low=r;
    }else{
        low=c;
    }
    r-=low;
    c-=low;
    total=c-r;
    total=total%10;
    printf(".%d.\n",total);*/
    if(re==false){
        if(r>c){
            ans=sq+c-r+1;
            printf("%d\n",ans%10);
        }else{
        ans=c-r+1;
        printf("%d\n",ans%10);
        }
    }else{
        if(r>c){
            ans=r-c+1;
            printf("%d\n",ans%10);
        }else{
            ans=sq+r-c+1;
            printf("%d\n",ans%10);
        }
    }
}


return 0;}
