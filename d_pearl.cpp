#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while(TC--)
    {
        int BD, DC;
        cin >> BD >> DC;
        int a= BD+DC;
        double Ans= 0.5*sqrt(3)*a*BD*0.5;
        cout << fixed << setprecision(3) << Ans << endl;
    }
    return 0;
}