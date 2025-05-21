#include<bits/stdc++.h>
using namespace std;
int main()
{
    string d;
    cin >> d;
    int l1 = 1, l2 = 1; 
    for (int i = 1; i < d.length(); i++) 
    { 
        if (d[i] == d[i-1])  l2++;  
        else 
        {
            if (l2 > l1) 
            { 
                l1 = l2;
            }
            l2 = 1; 
        }
    }
    if (l2 > l1)  l1 = l2;
    cout << l1 << endl; 
    return 0;
}