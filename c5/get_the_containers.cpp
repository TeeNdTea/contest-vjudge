#include<bits/stdc++.h>
using namespace std;
bool part(const vector<int>& ves, int m, long long mid) 
{
    int cont = 1; 
    long long cap = 0;
    for(int milk : ves) 
    {
        if(milk > mid) return false; 
        if(cap + milk > mid) 
        { 
            cont++;  
            cap = milk;  
            if(cont > m) return false; 
        } 
        else cap+=milk;
    }
    return cont<=m;
}
long long findCap(vector<int>& ves, int m) 
{
    long long l = ves[0]; 
    for(int milk : ves) 
    {
        if(milk > l) l = milk;
    }
    long long r = 0;
    for(int milk : ves) 
    {
        r += milk;
    }
    while(l < r) 
    {
        long long mid = l + (r-l)/2;
        if (part(ves, m, mid))  r = mid;    
        else l = mid + 1;       
    }
    return l;
}

int main() 
{
    int t;
    cin >> t; 
    for(int q=1; q<=t; ++q) 
    {
        int n, m;
        cin >> n >> m;
        vector<int> ves(n);
        for(int i=0; i<n; ++i) 
        {
            cin >> ves[i];
        }
        cout << "Case " << q << ": " << findCap(ves, m) << endl;
    }
    return 0;
}
