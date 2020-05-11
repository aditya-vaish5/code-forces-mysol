#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int q, n, temp, t, flag;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        flag = 1;
        cin >> n;
        cin >> t;
        cin >> temp;
        for (int j = 2; j < n; j++)
        {
            if (temp != t - 1 && temp != t + 1 && !(t == 1 && temp == n))
            {
                flag = 0;
            }
            t = temp;
            cin >> temp;
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}