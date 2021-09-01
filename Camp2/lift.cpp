#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec;

int main(){
    int lift,q;
    scanf("%d %d",&lift,&q);
    for(int a=1;a<=lift;a++){
        int chua;
        scanf("%d",&chua);
        vec.push_back({chua,a});
    }
    for(int a=1;a<=q;a++){
        int from,go;
        scanf("%d %d",&from,&go);
        int low=-1e8;
        int high=1e8;
        int highpos;
        int lowpos;
        for(int b=0;b<lift;b++){
            if(vec[b].first < from && vec[b].first > low){
                low=vec[b].first;
                lowpos=b;
            }
            if(vec[b].first >= from && vec[b].first < high){
                high=vec[b].first;
                highpos=b;
            }
        }
        int dish=high-from;
        int disl=from-low;
        if(dish==disl){
            if(vec[lowpos].second < vec[highpos].second){
                printf("%d\n",vec[lowpos].second);
                vec[lowpos]={go,vec[lowpos].second};
            }else{
                printf("%d\n",vec[highpos].second);
                vec[highpos]={go,vec[highpos].second};
            }
        }else if(dish < disl){
            printf("%d\n",vec[highpos].second);
            vec[highpos]={go,vec[highpos].second};
        }else{
            printf("%d\n",vec[lowpos].second);
            vec[lowpos]={go,vec[lowpos].second};
        }
    }
return 0;}
