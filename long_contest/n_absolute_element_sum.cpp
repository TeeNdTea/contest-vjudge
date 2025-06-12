#include <bits/stdc++.h>
using namespace std;
vector<long long> numbers(vector<int>& arr, vector<int>& qu) 
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<long long> prefix(n + 1, 0);
    for(int i=0; i<n; ++i) 
    {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    vector<long long> res;
    long long shift = 0;
    for(int q : qu) 
    {
        shift += q;
        auto it = lower_bound(arr.begin(), arr.end(), -shift);
        long long idx = it - arr.begin(); 
        long long neg = -(prefix[idx] + idx * shift);
        long long pos = (prefix[n] - prefix[idx]) + (n - idx) * shift;
        res.push_back(neg + pos);
    }

    return res;
}

int main() 
{
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;
    cin >> m;
    vector<int> qu(m);
    for(int &x : qu) cin >> x;
    vector<long long> ans = numbers(arr, qu);
    for(long long res : ans) 
    {
        cout << res << endl;
    }
    return 0;
}
