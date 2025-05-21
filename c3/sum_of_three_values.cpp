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
    sort(a.begin(), a.end());
    for(int i=0; i < n-2; ++i)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            long long sum = a[i].first + a[l].first + a[r].first;
            if(sum == x)
            {
                vector<int> res = {a[i].second, a[l].second, a[r].second};
                sort(res.begin(), res.end());
                cout << res[0] << " " << res[1] << " " << res[2] << endl;
                return 0;
            }
            else if (sum < x) ++l;
            else --r;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
