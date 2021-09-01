#include <bits/stdc++.h>
using namespace std;
deque<int> q;
deque<int> sq[15];
int findid[1005];

int main(){
    int maxid,student;
    scanf("%d %d",&maxid,&student);
    for(int a=1;a<=student;a++){
        int cls,id;
        scanf("%d %d",&cls,&id);
        findid[id]=cls;
    }
    char s[5];
    int num;
    while(1){
        scanf("%s",s);
        //printf("**%s**",s);
        if(s[0]=='E'){
            //printf("*");
            scanf("%d ",&num);
            //printf("--%d--",num);
            int wantid=findid[num];
            if(!sq[wantid].empty()){
                sq[wantid].push_back(num);
            }else{
                q.push_back(wantid);
                sq[wantid].push_back(num);
            }
        }else if(s[0]=='D'){
            if(q.empty()){
                printf("empty\n");
            }else{
            int now=q.front();
            int ans=sq[now].front();
            sq[now].pop_front();
            printf("%d\n",ans);
                if(sq[now].empty()){
                    q.pop_front();
                }
            }
        }else if(s[0]=='X'){
        break;
        }
    }

printf("0");
return 0;}
