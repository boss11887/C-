#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
vec.push_back(1);
vec.push_back(2);
vec.push_back(2);
vec.push_back(2);
vec.push_back(3);
vec.push_back(3);
vec.push_back(4);
int it=upper_bound(vec.begin(),vec.end(),2)-vec.begin();
int aa=lower_bound(vec.begin(),vec.end(),2)-vec.begin();
printf("%d\n%d",it,aa);
return 0;}
