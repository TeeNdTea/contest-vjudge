#include <bits/stdc++.h>
using namespace std;
bool write(long long v, int n, int k) 
{
    long long total = 0;
    while (v > 0) 
    {
        total+=v;
        v /= k;
        if (total >= n) return true; 
    }
    return total >= n;
}
long long findV(int n, int k) 
{
    long long l=1, r=n; 
    while (l < r) 
    {
        long long mid = l + (r-l)/2;
        
        if (write(mid, n, k)) r = mid; 
        else l = mid + 1;   
    }
    return l;
}
int main() 
{
    int n, k;
    cin >> n >> k;
    cout << findV(n, k) << endl;
    return 0;
}
