#include <bits/stdc++.h>
using namespace std;
long long production(long long m, long long wkr) 
{
    return m * wkr;
}
void resource(long long& m, long long& wkr, long long& c, long long cost) 
{
    long long total = c / cost;  
    if (total == 0) return;  
    long long mac = total / 2; 
    long long wkrs = total - mac;
    if (m < wkr) swap(mac, wkrs);
    m += mac;
    wkr += wkrs;
    c %= cost; 
}
long long min_pass(long long m, long long w, long long p, long long n) 
{
    long long passes = 0, c = 0;
    queue<pair<long long, long long>> q;
    set<pair<long long, long long>> visit;
    q.push({m, w});
    while (!q.empty()) 
    {
        long long size = q.size();
        while(size--) 
        {
            auto st = q.front();
            q.pop();
            m = st.first, w = st.second;
            long long produced = production(m, w);
            c += produced;
            passes++;
            if (c >= n) return passes;
            resource(m, w, c, p);
            if(!visit.count({m, w})) 
            {
                visit.insert({m, w});
                q.push({m, w});
            }
        }
    }
    return -1;  
}
int main() 
{
    long long m, w, p, n;
    cin >> m >> w >> p >> n;
    cout << min_pass(m, w, p, n) << endl;
    return 0;
}
