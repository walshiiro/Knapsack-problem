
#include <bits/stdc++.h>
using namespace std;


int main(){
int x,k;
cin>>x>>k;
int a[100],b[100];
for(int i=1;i<=x;i++)
    cin>>a[i]>>b[i];

int dp[100][100];
    for(int i=1;i<=x;i++)
    for(int j=1;j<=k;j++)
        if(a[i]<=j)
            dp[i][j]=max(dp[i-1][j],b[i]+dp[i-1][j-a[i]]);
        else dp[i][j]=dp[i-1][j];
        cout<<dp[x][k];

    





}