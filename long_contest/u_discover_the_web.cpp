#include <bits/stdc++.h>
using namespace std;
void navigation(int c) 
{
    stack<string> back, front;
    string curr_pg = "http://www.lightoj.com/";
    string cmd, url;
    cout << "Case " << c << ":" << endl;
    while(true) 
    {
        cin >> cmd;
        if (cmd == "QUIT") break;  
        if (cmd == "VISIT") 
        {
            cin >> url;
            back.push(curr_pg); 
            curr_pg = url;          
            while(!front.empty()) front.pop();  
            cout << curr_pg << endl;
        }
        else if(cmd == "BACK") 
        {
            if(back.empty()) cout << "Ignored" << endl;
            else 
            {
                front.push(curr_pg); 
                curr_pg = back.top(); 
                back.pop(); 
                cout << curr_pg << endl;
            }
        }
        else if(cmd == "FORWARD") 
        {
            if(front.empty()) cout << "Ignored" << endl;
            else 
            {
                back.push(curr_pg); 
                curr_pg = front.top();
                front.pop(); 
                cout << curr_pg << endl;
            }
        }
    }
}

int main() 
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) 
    {
        navigation(i);
    }
    return 0;
}
