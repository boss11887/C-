#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> um;
queue<int> q[30];
int ftg[30];
int ar[105];
int nowvar[30];

int main(){
int mc,n;
scanf("%d %d",&mc,&n);
for(int a=1;a<=mc;a++){
    int chua;
    scanf("%d",&chua);
    ftg[a]=chua+ftg[a-1];
}
char s[10];
while(1){
    scanf("%s",s);
    int now;
    if(s[0] == '0'){
        break;
    }
    if(s[0] >= 'A' && s[0] <='Z'){
        um[s[0]]++;
        int nowvar=um[s[0]];
        now=s[0]-'A'+1;
        int st=ftg[now-1];
        int ed=ftg[now];
        bool gin=false;
        for(int a=st+1;a<=ed;a++){
            if(ar[a]==0){
                ar[a]=nowvar;
                gin=true;
                printf("%c%d %d\n",now+'A'-1,nowvar,a);
                break;
            }
        }
        if(gin==false){
            q[now].push(nowvar);
            printf("%c%d w\n",now+'A'-1,nowvar);
        }
    }else{
    int aow;
    sscanf(s,"%d",&aow);
    int tua;
    for(int a=1;a<=mc;a++){
        if(ftg[a] >= aow){
            tua=a;
            break;
        }
    }
    if(!q[tua].empty()){
        printf("%c%d %d\n",tua+'A'-1,q[tua].front(),aow);
        q[tua].pop();
    }else{
        ar[aow]=0;
        printf("-- %d\n",aow);
    }

    }
}

return 0;}

/*
2 6
4 2
A A A B B B B A 6 1 2 3 B A 5 4 B 6 A B B A 0

*/
