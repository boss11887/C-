#include <cstdio>
int ar[101][101],qs[101][101],max=-1e6;

int main(){

int r,c,total,n;
scanf("%d %d",&r,&c);
scanf("%d",&n);
for(int a=1;a<=r;a++){
    total=0;
    for(int b=1;b<=c;b++){
        scanf("%d",&ar[a][b]);
        total+=ar[a][b];
        qs[a][b]=total;
    }
}

for(int a=2;a<=r;a++){
    for(int b=1;b<=c;b++){
        qs[a][b]+=qs[a-1][b];
        //printf("%d ",qs[a][b]);
    }
    //printf("\n");
}
//printf("-%d-",n);
for(int a=1;a<=r-n+1;a++){
    for(int b=1;b<=c-n+1;b++){
        ar[a][b]=qs[a+n-1][b+n-1]-qs[a-1][b+n-1]-qs[a+n-1][b-1]+qs[a-1][b-1];
        if(ar[a][b]>max){
            max=ar[a][b];
        }
    }
    //printf("\n");
}
int count=0;
for(int a=1;a<=r-n+1;a++){
    for(int b=1;b<=c-n+1;b++){
        if(ar[a][b]==max){
            count++;
        }
    }
}
printf("%d %d",max,count);
return 0;}
