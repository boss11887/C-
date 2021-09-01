#include <cstdio>
#include <stack>
using namespace std;

int r,c,st;
int ar[101][41];
int plusc[3]={-1,0,1};
bool ed=false;
stack<int> stk;

void dfs(int row,int col){
    if(row==r){
        ed=true;
        return;
    }
for(int a=0;a<=2;a++){
int nxtr=row+1;
int nxtc=col+plusc[a];
if(nxtc<1||nxtc>c){
    continue;
}
if(ar[nxtr][nxtc]==1){
    continue;
}
//printf("(%d,%d)",nxtr,nxtc);
dfs(nxtr,nxtc);
if(ed==true){
    int add;
        if(a==0){
            add=1;
        }else if(a==1){
            add=3;
        }else if(a==2){
            add=2;
        }
        stk.push(add);
        return;
    }
}
}


int main(){
    scanf("%d %d %d",&c,&st,&r);
    for(int a=1;a<=r;a++){
        for(int b=1;b<=c;b++){
            scanf("%d",&ar[a][b]);
        }
    }
dfs(0,st);

while(!stk.empty()){
    printf("%d\n",stk.top());
    stk.pop();
}


}
