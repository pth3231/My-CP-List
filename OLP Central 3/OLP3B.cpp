#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("../test.inp", "r", stdin);
    double a, b;
    cin >> a >> b;
    double t = (a*b)/(a+b);
    cout << setprecision(5) << fixed << t << endl;
    return 0;
}