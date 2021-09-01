#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> mt;
mt t;

class myclass{
public:
    int day;
    int num;

        myclass(int day,int num){
        this->day=day;
        this->num=num;
        }
};

struct compare{
    bool operator()(const myclass&a1,const myclass&a2){
    if(a1.day == a2.day)
        return a1.num > a2.num;
    return a1.day > a2.day;
    }
};

///pair of unordered_map

struct hh{
    size_t operator()(const pair<int,int>&a)const{
    return a.first+a.second;
    }
};
unordered_map<pair<int,int>,int,hh> um;
int main(){
t.insert(1);

return 0;}
