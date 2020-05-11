#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char c, c1;
    bool f1 = false, f2 = false;
    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];
        if (!f1)
        {
            if (c == 'A')
            {
                i++;
                c1 = s[i];
                if (c1 == 'B')
                {

                    f1 = true;
                    continue;
                }
            }
        }
        if (!f2)
        {
            if (c == 'B')
            {
                i++;
                c1 = s[i];
                if (c1 == 'A')
                {

                    f2 = true;
                    continue;
                }
            }
        }
    }
    if (f2 && f1)
    {
        cout << "YES";
    }
    else
    {
        f1 = false;
        f2 = false;
        for (int i = s.length(); i>-1; i--)
        {
            c = s[i];

            if (!f2)
            {
                // cout<< '2';
                if (c == 'B')
                {
                    i--;
                    c1 = s[i];
                    if (c1 == 'A')
                    {

                        f2 = true;
                        continue;
                    }
                }
            }
            if (!f1)
            {
                if (c == 'A')
                {
                    // cout<<'1';
                    i--;
                    c1 = s[i];
                    if (c1 == 'B')
                    {

                        f1 = true;
                        continue;
                    }
                }
            }
        }
        if (f2 && f1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
