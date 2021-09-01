#include <bits/stdc++.h>
using namespace std;

int w[]={0,1,1,2,3,1,3,2};
int ar[10];
int main(){
int day=0;
scanf("%d %d %d",&ar[1],&ar[2],&ar[3]);
int md=0;
int f,s,t;
int low=0;
int kumtob=0;
if(ar[1]>=3 && ar[2] >=2 && ar[3] >= 2){
    f=ar[1]/3;
    s=ar[2]/2;
    t=ar[3]/2;
    f=min(f,s);
    low=min(f,t);
}
printf("%d  ",low*7);
int want[10];
if(low > 2){
    ar[1]-=low*3;
    ar[2]-=low*2;
    ar[3]-=low*2;
    day+=low*7;
    int wa[10];
    wa[1]=ar[1];
    wa[2]=ar[2];
    wa[3]=ar[3];
    md=day;
    int realday=md;
    for(int b=1;b<=7;b++){
    md=realday;
    day=realday;
    want[1]=wa[1];
    ar[1]=wa[1];
    want[2]=wa[2];
    ar[2]=wa[2];
    want[3]=wa[3];
    ar[3]=wa[3];
    int a=b;
    while(1){
        a++;
        if(a==8){
            a=1;
        }
        if(ar[w[a]]>=1){
            ar[w[a]]--;
            md++;
        }else{
            break;
        }
    }
    a=b-1;
    while(1){
        a--;
        if(a<=0){
            a=7;
        }
        if(ar[w[a]]>=1){
            ar[w[a]]--;
            md++;
        }else{
            break;
        }
    }
        a=b;
        while(1){
        a++;
        if(a==8){
            a=1;
        }
        if(want[w[a]]>=1){
            want[w[a]]--;
            day++;
        }else{
            break;
        }
    }
        a=b-1;
        while(1){
        a--;
        if(a<=0){
            a=7;
        }
        if(want[w[a]]>=1){
            want[w[a]]--;
            day++;
        }else{
            break;
        }
    }
    printf("%d %d %d\n",a,day,md);
    kumtob=max(day,md);
    }
    printf("%d",kumtob);
    return 0;
}else{
    int chua[10];
    int high=0;
    for(int a=1;a<=7;a++){
        chua[1]=ar[1];
        chua[2]=ar[2];
        chua[3]=ar[3];
        int now=0;
        int pos=a;
        while(1){
            if(chua[w[pos]]>=1){
                now++;
                chua[w[pos]]--;
            }else{
                break;
            }
            pos++;
            if(pos==8){
                pos=1;
            }
        }
        high=max(high,now);
    }
    printf("%d",high);
    return 0;
}
return 0;}

/*
700000000 200000000 300000000
*/
