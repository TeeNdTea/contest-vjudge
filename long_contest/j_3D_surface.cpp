#include<bits/stdc++.h>
using namespace std;
int surfaceArea(const vector<vector<int>>& grid, int h, int w) 
{
    int total = 0;
    for(int i=0; i<h; ++i) 
    {
        for(int j=0; j<w; ++j) 
        {
            int ht = grid[i][j];
            if (ht > 0) 
            {
                total += ht * 6 - 2 * (ht - 1);
                if (i > 0) total -= 2 * min(grid[i][j], grid[i - 1][j]);
                if (j > 0) total -= 2 * min(grid[i][j], grid[i][j - 1]);
            }
        }
    }
    return total;
}
int main() 
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector<int>(w));
    for(int i=0; i<h; ++i)
        for(int j=0; j<w; ++j)
            cin >> grid[i][j];
    cout << surfaceArea(grid, h, w) << endl;
    return 0;
}
