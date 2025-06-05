#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, m;
    cin >> n >> m;
    vector<int> bench(n);
    int ppl = 0; 
    for(int i=0; i<n; i++) 
    {
        cin >> bench[i];
        ppl = max(ppl, bench[i]); 
    }
    int kMax = ppl + m;
    sort(bench.begin(), bench.end());
    for(int i=0; i<n; i++) 
    {
        int need = ppl - bench[i]; 
        if (m >= need) 
        {
            m -= need;
            bench[i] +=need; 
        } 
        else 
        {
            bench[i] += m;
            m = 0;
            break;
        }
    }
    int kMin = ppl + (m / n) + (m % n ? 1:0); 
    cout << kMin << " " << kMax << endl;
    return 0;
}
