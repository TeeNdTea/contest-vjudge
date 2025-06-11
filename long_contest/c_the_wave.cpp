#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, q;
    cin >> n >> q;
    vector<int> roots(n);
    set<int> r;
    for(int i=0; i<n; ++i) 
    {
        cin >> roots[i];
        r.insert(roots[i]);
    }
    sort(roots.begin(), roots.end());
    while (q--) 
    {
        int x;
        cin >> x;
        if (r.count(x)) 
        {
            cout << "0" << endl;
            continue;
        }
        int idx = upper_bound(roots.begin(), roots.end(), x) - roots.begin();
        int flip = n-idx;
        if (flip % 2 == 0) cout << "POSITIVE" << endl;
        else cout << "NEGATIVE" << endl;
    }
    return 0;
}
