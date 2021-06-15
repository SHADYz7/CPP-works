// This is the CodeForces problem stating that we've to delete the whole string consisting of "[]" and "()" brackets.. Condition is that the brackets must in such that there should be opening bracket for every closing bracket.. Count the number of deletion operations, if the further deletion cannot be possible suppose ")]([", then stop the counter

#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    int p = 0, q = 0, count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            p++;
        if (s[i] == '[')
            q++;
        if (s[i] == ')' && p > 0)
        {
            count++;
            p--;
        }
        if (s[i] == ']' && q > 0)
        {
            count++;
            q--;
        }
    }
    cout << count << endl;
}
