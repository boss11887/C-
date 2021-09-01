#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
vec.push_back(a);
vec.push_back(b);
vec.push_back(c);
vec.push_back(d);
sort(vec.begin(),vec.end());
printf("%d %d %d",vec[3]-vec[0],vec[3]-vec[1],vec[3]-vec[2]);

return 0;}
