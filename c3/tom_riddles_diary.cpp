#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    unordered_set<string> m;
    string name;
    for(int i=0; i<n; ++i) 
    {
        cin >> name;
        if (m.count(name)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
            m.insert(name);
        }
    }
    return 0;
}
