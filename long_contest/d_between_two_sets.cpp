#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{
    while(b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLcm(const vector<int>& a) 
{
    int lcm = a[0];
    for(int i=1; i < a.size(); ++i) 
    {
        lcm = (lcm / gcd(lcm, a[i])) * a[i];  
    }
    return lcm;
}
int findGcd(const vector<int>& b) 
{
    int res = b[0];
    for(int i=1; i< b.size(); ++i) 
    {
        res = gcd(res, b[i]);  
    }
    return res;
}

int getTotal(const vector<int>& a, const vector<int>& b) {
    int lcm_a = findLcm(a);
    int gcd_b = findGcd(b);
    int count = 0;
    for(int x=lcm_a; x<=gcd_b; x+=lcm_a) 
    {
        if (gcd_b % x == 0) 
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; ++i)
    {
        cin >> b[i];
    }
    cout << getTotal(a, b) << endl;
    return 0;
}
