#include <cstdio>
#include <cstring>
#include <string>
#include <queue>
int ar[27],now[27];
using namespace std;
int count=0;
queue<char> q;
char want[3001],s[3000001];

int main(){
gets(want);
gets(s);
int lenght=strlen(want);
for(int a=0;a<lenght;a++){
    //printf("%d-",want[a]-96);
    ar[want[a]-97]++;
    //printf("%d",s[a]);
}
//printf("-%d %d %d-",ar[0],ar[1],ar[2]);
for(int a=0;s[a]!='\0';a++){
    q.push(s[a]);
    now[s[a]-97]++;
    for(int b=0;b<26;b++){
        if(now[b]!=ar[b]){
            break;
        }
        if(b==25){
            count++;
        }
    }
    int p;
    if(q.size()==lenght){
        p=q.front();
        now[p-97]--;
        q.pop();
    }
}
printf("%d",count);


return 0;
}
