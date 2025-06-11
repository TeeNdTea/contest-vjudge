#include<bits/stdc++.h>
using namespace std;
bool canBuild(long long h, long long n) 
{
    return (h * (h+1)) / 2 <= n;  
}
int maxHeight(int n) 
{
    int low = 1, high = n, ans = 0;
    while(low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (canBuild(mid, n)) 
        {
            ans = mid;
            low = mid + 1;
        } 
        else high = mid - 1;
    }
    return ans;
}
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        cout << maxHeight(n) << endl;
    }
    return 0;
}
