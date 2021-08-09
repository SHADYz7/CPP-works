// Find the number of trailing zeroes in a factorial
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res = 0, i, n;
    cin >> n;
    for (i = 5; i <= n; i *= 5)
    {
        res = res + n / i;
    }
    cout << "For " << n << "!, the number of trailing zeroes is " << res << endl;
    return 0;
}