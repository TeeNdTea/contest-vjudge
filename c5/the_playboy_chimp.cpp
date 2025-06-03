#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i=0; i<n; ++i) 
    {
        cin >> c[i];
    }
    int q;
    cin >> q;
    vector<int> h(q);
    for(int i=0; i<q; ++i) 
    {
        cin >> h[i];
    }
    for(int i=0; i<q; ++i) 
    {
        int chimp = h[i];
        auto low = lower_bound(c.begin(), c.end(), chimp);
        auto up = upper_bound(c.begin(), c.end(), chimp);
        if (low == c.begin()) cout << "X ";
        else cout << *(--low) << " ";
        if (up == c.end()) cout << "X" << endl;
        else cout << *up << endl;
    }
    return 0;
}
