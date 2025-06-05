#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 1 << n; 
    if (n < 1 || n > 16) 
    {
    cout << "Invalid" << endl;
    return 0;
    }
    for (int i = 0; i < total; i++) 
    {
        int gray = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--) 
        {
            if ((gray && (1 << j)) != 0) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }

    return 0;
}

  