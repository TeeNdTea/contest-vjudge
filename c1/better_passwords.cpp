#include <bits/stdc++.h>
using namespace std;
int main() { 
    string A;
    cin >> A;

    if (A[0] >= 'a' && A[0] <= 'z') A[0] = A[0] - 'a' + 'A';

    string res = ""; 
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 's') res += '$';
            
        else if (A[i] == 'i') res += '!';
        else if (A[i] == 'o')
        {
            res += '(';
            res += ')'; 
        } 
        else res += A[i]; 
    }

    res += '.'; 
    cout << res << endl;    

    return 0;
}
