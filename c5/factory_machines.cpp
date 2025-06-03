#include<bits/stdc++.h>
using namespace std;
bool production(vector<int>& mac, long long mid, long long t) 
{
    long long total = 0;
    for(int k : mac) 
    {
        total += mid/k;  
        if(total >= t) return true;  
    }
    return total >=t;
}
long long time(vector<int>& mac, long long t) 
{
    long long left = 1, right = 1e18;  
    while(left < right) 
    {
        long long mid = left + (right - left)/2;
        if(production(mac, mid, t))
            right = mid; 
        else
            left = mid+1;
    }
    return left;
}

int main() 
{
    int n;
    long long t;
    cin >> n >> t;  
    vector<int> mac(n);
    for(int i=0; i<n; ++i) 
    {
        cin >> mac[i];
    }
    sort(mac.begin(), mac.end());
    cout << time(mac, t) << endl; 
    return 0;
}