#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;
int ar[100005];

int main(){
freopen("output.txt","w",stdout);
int n;
scanf("%d",&n);
for(int i=2;i<=n;i++){
    if(ar[i] != 1){
        vec.push_back(i);
        for(int j=i+i;j<=n;j+=i){
            ar[j]=1;
        }
    }
}
for(int i=0;i<vec.size();i++){
    printf("%d ",vec[i]);
}
return 0;}

