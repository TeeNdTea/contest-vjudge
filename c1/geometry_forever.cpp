#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
/*
c<a+b
c>|a+b|
|a-b| < c < a+b
|a+b|-1.....a+b-1
*/
    int left = abs(a-b)+1;
    int right = a+b-1;
    int val;
    if(left>right)
    {
        cout<<"0"<<endl;
    }
    else{
        val=right-left+1;
        cout<<val;
    }
    return 0;
}