#include<bits/stdc++.h>
using namespace std;
string encodeDNA(string s) 
{
    map<string,char> dna;
    dna["00"] = 'A';
    dna["01"] = 'T';
    dna["10"] = 'C';
    dna["11"] = 'G';
    string final = " ";
    for(int i=0; i<s.length(); i+=2) 
    {
        string pair = s.substr(i, 2);  
        final += dna[pair];  
    }
    return final;
}
int main() 
{
    int t;
    cin >> t;
    vector<string> res;
    for(int q=0; q<t; q++) 
    {
        int n;
        string m;
        cin >> n >> m;
        string encode = encodeDNA(m);
        res.push_back(encode);
    }
    for(auto it=res.begin(); it!=res.end(); ++it) 
    {
        cout << *it << endl;
    }
    return 0;
}

