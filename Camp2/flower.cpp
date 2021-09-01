#include <cstdio>
int row[1000001],col[1000001],head[1000001],count=0;
int findhead(int a){
    if(head[a]==a){
        return a;
    }else{
    return head[a] = findhead(head[a]);
    }
}

int main(){
int n,r,c;
scanf("%d",&n);
for(int a=1;a<=n;a++){
    scanf("%d %d",&r,&c);
    if(row[r]==0&&col[c]==0){
        head[a]=a;
        row[r]=a;
        col[c]=a;
        count++;
        //printf(".%d.",head[a]);
    }else if(row[r]==0&&col[c]!=0){
        int chua = findhead(col[c]);
        row[r]=chua;
        //printf("-%d-",chua);
        col[c]=chua;
        head[a]=chua;
    }else if(row[r]!=0&&col[c]==0){
        int chua = findhead(row[r]);
        row[r]=chua;
        //printf("-%d-",chua);
        col[c]=chua;
        head[a]=chua;
    }else if(row[r]!=0&&col[c]!=0){
        int chua1 = findhead(row[r]);
        int chua2 = findhead(col[c]);
        if(chua1!=chua2){
            row[r]=chua1;
            col[c]=chua1;
            head[a]=chua1;
            count--;
        }else if(chua1==chua2){
            row[r]=chua1;
            col[c]=chua1;
            head[a]=chua1;
        }
    }
    //printf("--%d\n",head[a]);
}
//printf("%d",(count));
printf("%d",(count+1)/2);

return 0;}
