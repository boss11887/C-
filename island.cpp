#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int ar[505][505];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int row,col;
        int nub=0;
        scanf("%d %d",&row,&col);
        for(int a=1;a<=row;a++){
            for(int b=1;b<=col;b++){
                scanf("%d",&ar[a][b]);
            }
        }
        for(int a=1;a<=row;a++){
            for(int b=1;b<=col;b++){
                if(ar[a][b]==1){
                    //printf("HEY %d %d\n",a,b);
                    q.push({a,b});
                    nub++;
                    ar[a][b]=1;
                    while(!q.empty()){
                        int nowr=q.front().first;
                        int nowc=q.front().second;
                        q.pop();
                        //printf("HEY %d %d\n",nowr,nowc);
                        for(int i=-1;i<=1;i++){
                            for(int k=-1;k<=1;k++){
                                int gor = nowr +i;
                                int goc=nowc+k;
                                //printf("**%d %d\n",gor,goc);
                                if(gor < 0 || goc < 0){
                                    continue;
                                }
                                if(ar[gor][goc]==0){
                                    continue;
                                }
                                ar[gor][goc]=0;
                                q.push({gor,goc});
                                //printf("**%d %d\n",gor,goc);
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n",nub);
    }

}
