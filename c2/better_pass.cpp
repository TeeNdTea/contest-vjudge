#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    if (a[0] >= 'a' && a[0] <= 'z')  a[0] = a[0] - ('a'-'A'); 
    string s = "";
    for (int i = 0;i < a.length();i++) 
    {
        if (a[i] == 's')  s += "$";
        else if (a[i] == 'i') s += "!";
        else if (a[i] == 'o') s += "()";
        else s += a[i]; 
    }
    s += ".";
    cout << s << endl;
    return 0;
}