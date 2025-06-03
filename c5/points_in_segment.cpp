#include<bits/stdc++.h>
using namespace std;
int count(const vector<int>& p, int a, int b) 
{
    auto lower = lower_bound(p.begin(), p.end(), a);
    auto upper = upper_bound(p.begin(), p.end(), b);
    return upper - lower; 
}
int main() 
{
    int t;
    cin >> t; 
    for(int x=1; x<=t; ++x) 
    {
        int n, q;
        cin >> n >> q;
        vector<int> p(n);
        for(int i=0; i<n; ++i) 
        {
            cin >> p[i];
        }   
        sort(p.begin(), p.end());
        cout << "Case " << x << ":" << endl;
        while(q--) 
        {
            int a, b;
            cin >> a >> b;
            cout << count(p, a, b) << endl;
        }
    }
    return 0;
}