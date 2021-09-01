#include <bits/stdc++.h>
int row[1000005],col[1000005],head[1000005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
    }
int main(){
    int n;
    int cnt=0;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        int r,c;
        scanf("%d %d",&r,&c);
        if(row[r] ==0 && col[c]==0){
            cnt++;
            row[r]=a;
            col[c]=a;
            head[a]=a;
        }else if(row[r] == 0 && col[c] != 0){
            int go=col[c];
            row[r]=go;
        }else if(col[c] == 0 && row[r] != 0){
            int go=row[r];
            col[c]=go;
        }else if(col[c] != 0 && row[r] != 0){
            int h1=findhead(col[c]);
            int h2=findhead(row[r]);
            if(h1 != h2){
                head[h1]=head[h2];
                cnt--;
                col[c]=row[r];
            }
        }
    }
    /*
    for(int a=1;a<=n;a++){
        printf("(%d %d)",a,findhead(a));
    }
    */
    printf("%d",(cnt+1)/2);

return 0;}
