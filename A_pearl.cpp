#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll tc;
    cin >> tc;
    while(tc--)
    {
        int n, a, b, c;
        cin >> n;
        cin >> a >> b >> c;
        
        int minimum= min({a, b, c});
        int ans= n-minimum;

        if(ans>=10)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
