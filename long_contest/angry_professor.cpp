#include<bits/stdc++.h>
using namespace std;
string angry(int k, vector<int>& arive) 
{
    int count = 0; 
    for(int time : arive) 
    {
        if(time <= 0) count++;
    }
    if(count < k) return "YES";
return "NO";
}
int main() 
{
    int t; 
    cin >> t;
    while(t--) 
    {
        int n, k;
        cin >> n >> k; 
        vector<int> arive(n); 
        for (int i = 0; i < n; ++i) 
        {
            cin >> arive[i];
        }
        cout << angry(k, arive) << endl;
    }
    return 0;
}
