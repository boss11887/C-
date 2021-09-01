#include <bits/stdc++.h>
int n=7;
int use[10];
int st,ed;

void dfs(int a){
    //printf("*");
    if(a==n+1){
        int cnt=0;
        int total=0;
        bool jue=false;
        for(int b=1;b<=n;b++){
            //printf("%d ",use[b]);
            if(use[b] !=0 || jue==true){
                jue=true;
                cnt++;
            }
        }
        //printf("cnt  =  %d",cnt);
        //printf("\n");
        int now;
        for(int b=1;b<=n;b++){
            if(use[b] !=0){
                int chua=use[b];
                //printf("chua = %d",use[b]);
                for(int c=2;c<=cnt;c++){
                    chua*=use[b];
                    //printf("*");
                }
                now=chua;
                total+=now;
            }
        }
        //printf("==%d\n",total);
        int sum=0;
        for(int b=1;b<=n;b++){
            sum*=10;
            sum+=use[b];
        }
        //printf("............%d",sum);
        if(sum==total){
            if(sum >= st && sum <=ed){
            printf("%d ",sum);
            }
        }
        return ;
    }
    for(int b=0;b<=9;b++){
        use[a]=b;
        //printf("*");
        dfs(a+1);
    }
}

int main(){
    scanf("%d %d",&st,&ed);
dfs(1);
//printf("1");

return 0;}
