#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    unordered_map<int, int> f;  
    unordered_set<int> val; 
    list<int> elem; 
    int hom = 0; 
    int het = 0;  
    while (n--) 
    {
        string op;
        int k;
        cin >> op >> k;
        if (op == "insert") 
        {
            elem.push_back(k);
            f[k]++;
            if (f[k] == 2) hom++;         
            if (f[k] == 1) val.insert(k);  
        } 
        else if (op == "delete") 
        {
            if (f[k] > 0) 
            {
                f[k]--;
                if (f[k] == 1) hom--;    
                if (f[k] == 0) 
                {
                    val.erase(k);    
                    f.erase(k);
                }
                for (auto it=elem.begin(); it != elem.end(); ++it) 
                {
                    if (*it == k) 
                    {
                        elem.erase(it);
                        break;
                    }
                }
            }
        }

        bool isHomo = hom > 0;
        bool isHetero = val.size() >= 2;
        if (isHomo && isHetero) cout << "both" << endl;
        else if (isHomo) cout << "homo" << endl;
        else if (isHetero) cout << "hetero" << endl;
        else cout << "neither" << endl;
    }
    return 0;
}
