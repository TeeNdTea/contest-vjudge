#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s) 
{
    int l = 0, r = s.length()-1;
    while(l < r) 
    {
        if(s[l] != s[r]) return false; 
        l++;
        r--;
    }
    return true; 
}
int main() 
{
    string S;
    cin >> S; 
    if (isPalindrome(S)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
