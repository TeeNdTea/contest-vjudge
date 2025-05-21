#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int arr[26] = {0};
    for (int i = 0; i <s.length(); i++) 
    {
        char c = s[i];
        if (c >= 'A' && c <='Z')  arr[c - 'A']++; 
    }
    int count = 0, idx = -1;
    for (int i=0; i < 26; i++) 
    {
        if (arr[i] % 2 !=0) 
        {
            count++;
            idx = i;
        }
    }
    if (count > 1) 
    {
        cout << "invalid" << endl;
        return 0;
    }
    string first = "", mid = "";
    for (int i = 0; i < 26; i++) 
    {
        string temp(arr[i] / 2, 'A' +i);
        first += temp;
    }
    if (idx != -1) 
    {
        mid = string(arr[idx], 'A' + idx);
    }
    string last = first;
    int len = last.length();
    for (int i = 0; i < len / 2; i++) 
    { 
    char temp = last[i];
    last[i] = last[len - i - 1];
    last[len - i - 1] = temp;
}
    cout << first + mid + last << endl;

    return 0;
}
