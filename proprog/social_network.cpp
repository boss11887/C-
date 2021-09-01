#include <bits/stdc++.h>
using namespace std;
unordered_map<string,int> um;
char f[25],s[25];
int head[100005];
int val[100005];

int findhead(int a){
    if(head[a]==a)
        return a;
    return head[a]=findhead(head[a]);
}

int main(){
int n;
int q;
scanf("%d",&q);
while(q--){
scanf("%d",&n);
for(int a=1;a<=n;a++){
    head[a]=a;
    val[a]=1;
}
int nh=1;
for(int a=1;a<=n;a++){
    scanf("%s %s",f,s);
    if(um[f]==0 && um[s]==0){
        um[f]=nh;
        um[s]=nh;
        val[nh]++;
        nh++;
    }else if(um[f]==0){
        um[f]=um[s];
        val[findhead(um[f])]++;
    }else if(um[s]==0){
        um[s]=um[f];
        val[findhead(um[s])]++;
    }else{
        int h1=findhead(head[um[s]]);
        int h2=findhead(head[um[f]]);
        if(h1 != h2){
            //printf("==%d %d %d\n",h1,h2,val[h1]+val[h2]);
            val[h1]+=val[h2];
            head[h2]=head[h1];
        }
    }

    printf("%d\n",val[findhead(um[f])]);
}
um.clear();
}
return 0;}
/*
1
3
a b
c d
a c
*/
