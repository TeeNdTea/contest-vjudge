#include <bits/stdc++.h>
using namespace std;
bool part(const vector<int>& arr, int k, long long mid) 
{
    int sub = 1;
    long long c = 0;
    for (int num : arr) 
    {
        if (c + num > mid) 
        { 
            sub++;  
            c = num;  
            if (sub > k) return false;
        } 
        else c += num; 
    }
    return sub <= k;
}
long long findSum(vector<int>& arr, int k) 
{
    long long l = arr[0]; 
    for (int num : arr) 
    {
        if (num > l) l = num;  
    }
    long long r = 0;
    for(int num : arr) 
    {
        r += num;  
    }
    while(l < r) 
    {
        long long mid = l+(r-l)/2;
        
        if (part(arr, k, mid)) r = mid;  
        else l = mid + 1;  
    }
    return l;
}

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) 
    {
        cin >> arr[i];
    }
    cout << findSum(arr, k) << endl;
    return 0;
}
