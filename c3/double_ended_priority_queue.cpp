#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    multiset<int> s;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < q; ++i)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if(t == 1)
        {
            if(!s.empty())
            {
                cout << *s.begin() << endl;
                s.erase(s.begin());
            }
        }
        else if(t == 2)
        {
            if(!s.empty())
            {
                cout << *s.rbegin() << endl;
                auto m = s.end();
                --m;
                s.erase(m);
            }
        }
    }
    return 0;
}
