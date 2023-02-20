
#include<bits/stdc++.h>
using namespace std;
int a[500005];
int n;
void ms(int low,int mid,int high){
int size1=mid-low+1;
int size2=high-mid;
int l[size1+5];
int r[size2+5];
printf("L=======\n");
for(int i=1;i<=size1;i++){
    l[i]=a[low+i-1];
    printf("%d ",l[i]);
}
printf("\nR=====\n");
for(int i=1;i<=size2;i++){
    r[i]=a[mid+i];
    printf("%d ",r[i]);
}
printf("\n");
int cur1=1,cur2=1,realcur=low;
while(cur1<=size1&&cur2<=size2){
    if(l[cur1]<r[cur2]){
        a[realcur]=l[cur1];
        cur1++;
    }else{
        a[realcur]=r[cur2];
        cur2++;
    }
    realcur++;
}
while(cur1<=size1){
    a[realcur]=l[cur1];
    realcur++;
    cur1++;
}
while(cur2<=size2){
    a[realcur]=r[cur2];
    realcur++;
    cur2++;
}

}
void merge_sort(int low,int high){
//printf("<<<%d %d\n",low,high);
if(low>=high){
    return;
}
int mid=(low+high)/2;
merge_sort(low,mid);
merge_sort(mid+1,high);
ms(low,mid,high);
// for(int i=1;i<=n;i++){
//     printf("%d ",a[i]);
// }
printf("\n");

}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    merge_sort(1,n);
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
}