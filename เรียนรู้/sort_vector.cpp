#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
vector<pair<int,int> > vec;

bool sortbysecond(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second != b.second)
        return (a.second < b.second);
    return (b.first < a.first);
}

int main(){
    vec.push_back(make_pair(3,3));
    vec.push_back(make_pair(1,3));
    vec.push_back(make_pair(2,6));
    vec.push_back(make_pair(0,2));
    vec.push_back(make_pair(4,5));
    vec.push_back(make_pair(2,3));
    sort(vec.begin(),vec.end(),sortbysecond);
    for(auto i:vec){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}