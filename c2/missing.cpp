#include<bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int n;
    cin >> n;
    long long int total = n * (n + 1) / 2;
    long long int giv = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        long long int num;
        cin >> num;
        giv += num;
    }
    cout << (total - giv) << endl;
    return 0;
}
