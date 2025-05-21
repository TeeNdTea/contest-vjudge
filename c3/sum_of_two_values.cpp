#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for(int i=0; i<n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    unordered_map<long long, int> m;
    m.reserve(n);
    for(int i=0; i<n; ++i)
    {
        long long t = x - a[i].first;
        if(m.count(t))
        {
            cout << m[t] << " " << a[i].second << endl;
            return 0;
        }
        m[a[i].first] = a[i].second;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
