#include<bits/stdc++.h>
using namespace std;
void bon(vector<int>& bill, int k, int b) 
{
    int total = 0;
    for(int i=0; i<bill.size(); ++i) 
    {
        if(i != k) total += bill[i];
    }
    int share = total/2;
    if (share == b) cout << "Bon Appetit" << endl;
    else cout << b - share << endl;
}
int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> bill(n);
    for(int i=0; i<n; ++i) 
    {
        cin >> bill[i];
    }
    int b;
    cin >> b;
    bon(bill, k, b);
    return 0;
}
