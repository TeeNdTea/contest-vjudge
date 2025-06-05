#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    bool isNegative = false;
    if(x<0) 
    {
        isNegative = true;
        x=-x;
    }
    int d[20];
    int count = 0;
    while(x>0)
    {
        d[count++]=x%10;
        x/=10;
    }
    if (isNegative) 
    {
        cout << "-";
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << d[i];
        if (i != 0 && (i % 3 == 0))
        {
            cout << ",";
        }
    }

    cout << endl;
    return 0;
}