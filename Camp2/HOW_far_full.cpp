#include <bits/stdc++.h>
using namespace std;

class myclass{
public:
    int val;
    int pos;
    myclass(int val,int pos){
        this->val=val;
        this->pos=pos;
    }
};
struct compare{
    bool operator()(const myclass&n1,const myclass&n2){
        return n1.val < n2.val;
    }
};

vector<myclass> vec;

int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back(myclass(chua,a));
    }
    sort(vec.begin(),vec.end(), compare()) ;
    vec.push_back(myclass(2000000000,1000));
    int high=-1e9,low=1e9,last,now,mm=0,pos,tual=1e9,tuah=-1e9;
    last=vec[0].val;
    for(int a=0;a<vec.size();a++){
        now=vec[a].val;
        if(last != now){
            printf("%d %d\n",last,mm);
            high=-1e9;
            low=1e9;
            mm=0;
            tual=1e9;
            tuah=-1e9;
        }
        pos=vec[a].pos;
        high=max(high,pos);
        low=min(low,pos);
        tual=min(tual,a+1);
        tuah=max(tuah,a+1);
        //printf("==%d %d\n",low,high);
        int cal=max(abs(high-tual),abs(tuah-low));
        mm=max(cal,mm);
        last=now;
    }
return 0;}
