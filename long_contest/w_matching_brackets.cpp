#include<bits/stdc++.h>
using namespace std;
bool isValid(const string& s) 
{
    stack<char> st;
    map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};
    for(char ch : s) 
    {
        if(ch =='(' || ch =='[' || ch =='{') 
        {
            st.push(ch);
        }
        else if(ch ==')' || ch ==']' || ch =='}') 
        {
            if(st.empty() || st.top() != pairs[ch]) return false;
            st.pop(); 
        }
    }
    return st.empty();
}
int main() 
{
    string s;
    cin >> s; 
    if (isValid(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
