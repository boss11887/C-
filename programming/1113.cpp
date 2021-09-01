#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
char s[1000005];
int r[1000005];
int o[1000005];

int main(){
int n,m;
scanf("%d %d %s",&n,&m,s+1);
int tum=m+1;
vec.push_back(0);
while(tum<=n){
    vec.push_back(tum);
    tum+=m+1;
}
for(int a=1;a<=n;a++){
    r[a]=r[a-1];
    o[a]=o[a-1];
    if(s[a]=='R'){
        r[a]++;
    }else{
        o[a]++;
    }
    //printf("%d %d\n",r[a],o[a]);
}


int ans;
for(int a=vec.size()-1;a>=0;a--){
    //int doo=(low+high)/2;
    //mid=lower_bound(vec.begin(),vec.end(),doo)-vec.begin();
    //==printf("%d\n",vec[mid]);
    int tum=0;
    for(int b=vec[a];b<=n;b++){
        //printf("%d",vec[a]);
        int oo=o[b]-o[b-vec[a]];
        int rr=r[b]-r[b-vec[a]];
        //printf("%d=%d %d=%d\n",oo,rr,b,b-vec[a]);
        if(rr*m==oo){
            printf("%d",vec[a]);
            return 0;
        }
        tum++;
    }
}
//printf("0");
//printf("%d",ans);
return 0;}
/*
4 3
OOOR
*/
