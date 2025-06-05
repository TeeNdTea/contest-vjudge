#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    vector<int> dp(n, 1); 
    for(int i = n - 2; i >= 0; --i) 
    {
        if(arr[i+1] > arr[i] && arr[i+1] - arr[i] >= 2)
            dp[i] = 1 + dp[i+1];  
        else dp[i] = 1;  
    }
    for(int i=0; i<n; ++i)
    {
        if (dp[i] >= 2) cout << dp[i] << endl;
        else cout << 0 << endl;
    }
}
