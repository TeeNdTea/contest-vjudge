#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin >> A;

    if (A < 0 || A >= 200000000) {
        cout << "Invalid" << endl;
        return 0;
    }

    int d[20]; 
    int count = 0;

    if (A == 0) {
        d[count++] = 0;
    } 
    else {
        while (A > 0) {
            d[count++] = A % 10;
            A = A / 10;
        }
    }  
    for (int i = count - 1; i >= 0; i--) {
        cout << d[i];
        if (i > 0 && i % 3 == 0) {
            cout << ",";
        }
    }

    cout << endl;
    return 0;
}
