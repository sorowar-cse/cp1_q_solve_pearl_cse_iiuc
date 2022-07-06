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
        int n, ok= 0;
        cin >> n;
        ll ar[n];
        for(ll i= 0; i<n; i++)
            cin >> ar[i];

        for(ll i= 0; i<n; i++)
            {
            if(ar[i]==2)
                {
                for(ll j= i; j<n; j++)
                {
                    if(ar[j]==1)
                    {
                        ok= 1;
                        break;
                    }
}
        }
            }
        if(ok==1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}



