#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while(TC--)
    {
        string s;
        cin >> s;
        int length= s.size();
        if(s[length-1]=='F')
            cout << "Yes" << endl;
        else if(s[length-1]=='M')
            cout << "No" << endl;
    }
    return 0;
}