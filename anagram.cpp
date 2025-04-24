#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length()) 
    {
        cout << "No" << endl;
        return 0;
    }
    int arr1[26], arr2[26];
    for (int i = 0; i<26; i++) 
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }
    for (int i = 0; i < a.length(); i++) 
    {
        int idx = a[i] -'a'; 
        if (idx >= 0 && idx < 26)  arr1[idx]++;
    }
    for (int i = 0; i < b.length(); i++) 
    {
        int idx = b[i] - 'a'; 
        if (idx >= 0 && idx < 26)  arr2[idx]++;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (arr1[i]!=arr2[i]) 
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}