#include <cstdio>
#include <queue>
using namespace std;
queue<int> q[30];
int main(){
    char s[100000];
    int bab,table,nt[4],la,lb,lc,counta=0,countb=0,countc=0,eda,edb,edc;
    scanf("%d %d",&bab,&table);
    for(int a=1;a<=bab;a++){
        int x;
        scanf("%d",&nt[a]);
    }
    //left var
    la=0;
    lb=nt[1];
    lc=lb+nt[2];
    //ed a;
    eda=lb[1];

    gets(s);
    gets(s);
    for(int a=0;s[a] != '\0';a++){
        if(s[a]=='A'&&nt[1]>=1){
            counta++;
            nt[1]--;
            la++;
            printf("A%d %d\n",counta,la);
        }else if(s[a]=='A'&&nt[1]==0){
            counta++;
            qa.push(counta);
            printf("A%d w\n",counta);
        }

        if(s[a]=='B'&&nt[2]>=1){
            countb++;
            nt[2]--;
            lb++;
            printf("B%d %d\n",countb,lb);
        }else if(s[a]=='B'&&nt[2]==0){
            countb++;
            qb.push(countb);
            printf("B%d w\n",countb);
        }

        if(s[a]=='C'&&nt[3]>=1){
            countc++;
            nt[3]--;
            lc++;
            printf("B%d %d\n",countc,lc);
        }else if(s[a]=='C'&&nt[3]==0){
            countc++;
            qc.push(countc);
            printf("C%d w\n",countc);
        }



    }
return 0;}
