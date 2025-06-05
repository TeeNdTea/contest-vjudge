#include<bits/stdc++.h>
using namespace std;
long long find(long long n, long long k) 
{
    return k + (k-1) / (n-1);
}
int main() 
{
    int t;
    cin >> t; 
    while (t--) 
    {
        long long n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
    return 0;
}
