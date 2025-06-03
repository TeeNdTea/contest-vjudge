#include <bits/stdc++.h>
using namespace std;
int search(const vector<int>& arr, int l, int r, int key) 
{
    if(l > r) return -1;
    int mid = l + (r-l)/2;
    if(arr[mid] == key) 
    {
        while (mid > 0 && arr[mid-1] == key) 
        {
            mid--;
        }
        return mid;
    } 
    else if (arr[mid] > key)  return search(arr, l, mid-1, key);
    else return search(arr, mid+1, r, key);
}

int main() 
{
    int n, q;
    int caseNum = 1;
    while (cin >> n >> q) 
    {
        if(n==0 && q==0) break;
        vector<int> marb(n);
        for(int i=0; i<n; ++i) 
        {
            cin >> marb[i];
        }
        sort(marb.begin(), marb.end()); 
        cout << "CASE# " << caseNum++ << ":" << endl;

        for(int i= 0; i<q; ++i) 
        {
            int s;
            cin >> s;
            auto it = lower_bound(marb.begin(), marb.end(), s);
            if (it != marb.end() && *it == s) cout << s << " found at " << (it - marb.begin() + 1) << endl;  
            else cout << s << " not found" << endl;
        }
    }
    return 0;
}
