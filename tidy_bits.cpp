#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    int count = 0;
    int temp = a;
    while (temp > 0) 
    {
        if (temp % 2 == 1) count++;
        temp = temp / 2;
    }
    int res = 1;
    while (true)
    {
        int num = res;
        int count1 = 0;

        while (num > 0)
        {
            if (num % 2 == 1) count1++;
            num = num / 2;
        }

        if (count1 == count)
        {
            cout << res << endl;
            break;
        }
        res++;
    }

    return 0;
}


// if (a < 0 || a >= 1000000) 
// {
//     cout << "Invalid" << endl;
//     return 0;
// }