#include<bits/stdc++.h>
using namespace std;
void solve() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum % 9 == 0 && min({a, b, c}) >= sum / 9) 
    cout << "YES" << endl; 
    else cout << "NO" << endl;
}
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }
    return 0;
}
