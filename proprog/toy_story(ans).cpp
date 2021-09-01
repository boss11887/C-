#include <bits/stdc++.h>
using namespace std;
int n;
int ar[105];
int sum=0;

int findMin( int n)
{
    // Calculate sum of all elements

    // Create an array to store results of subproblems
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += ar[i];

    // Create an array to store results of subproblems
    bool dp[n+1][sum+1];
    // Initialize first column as true. 0 sum is possible
    // with all elements.
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    // Initialize top row, except dp[0][0], as false. With
    // 0 elements, no other sum except 0 is possible
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    // Fill the partition table in bottom up manner
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=sum; j++)
        {
            // If i'th element is excluded
            dp[i][j] = dp[i-1][j];

            // If i'th element is included
            if (ar[i-1] <= j)
                dp[i][j] =max(dp[i][j],dp[i-1][j-ar[i-1]]);
        }
    }

    // Initialize difference of two sums.
    int diff = INT_MAX;

    // Find the largest j such that dp[n][j]
    // is true where j loops from sum/2 t0 0
    for (int j=sum/2; j>=0; j--)
    {
        // Find the
        if (dp[n][j] == true)
        {
            diff = sum-2*j;
            break;
        }
    }
    return diff;
}

int main(){
scanf("%d",&n);
for(int a=0;a<n;a++){
    scanf("%d",&ar[a]);
    sum+=ar[a];
}
printf("%d",findMin(n));
return 0;}
