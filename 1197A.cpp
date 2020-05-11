#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int q = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n = 0;
        cin >> n;
        if (n < 3)
        {
            int t;
            for (int k = 0; k < n; k++)
            {
                cin >> t;
            }
            cout << 0 << endl;
            continue;
        }
        int temp, l, l1;
        cin >> l >> temp;
        if (temp < l)
        {
            l1 = temp;
        }
        else
        {
            l1 = l;
            l = temp;
        }
        for (int j = 0; j < n - 2; j++)
        {
            cin >> temp;
            if (temp >= l)
            {
                l1 = l;
                l = temp;
            }
            else if (temp > l1)
            {
                l1 = temp;
            }
        }
        l1--;
        if (l1 > (n - 2))
        {
            l1 = n - 2;
        }
        if (l1 < 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << l1 << endl;
        }
    }
}