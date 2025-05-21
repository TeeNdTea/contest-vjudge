#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    unordered_map<string, int> d;
    for(int i=0; i<n; ++i) 
    {
        string name;
        cin >> name;
        if (d.find(name) == d.end()) 
        {
            d[name] = 1;
            cout << "OK" << endl;
        } 
        else 
        {
            int count = d[name];
            string n1 = name + to_string(count);
            while (d.find(n1) != d.end()) 
            {
                count++;
                n1 = name + to_string(count);
            }
            d[name] = count + 1; 
            d[n1] = 1;     
            cout << n1 << endl;
        }
    }
    return 0;
}
