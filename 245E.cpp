#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int j = 0, min = 0, mod = 0;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        char c = s[i];
        if (c == '-')
        {
            j++;
        }
        else
            j--;
        mod = abs(j);
        if (mod > min)
            min = mod;
    }
}
