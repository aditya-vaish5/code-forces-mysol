#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int q = 0, n = 0, x_max = 0, x_min = 0, y_min = 0, y_max = 0, x, y;
    int t = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        x_max = 100000;
        y_max = 100000;
        y_min = -100000;
        x_min = -100000;

        for (int j = 0; j < n; j++)
        {
            cin >> x >> y;
            cin >> t;
            if (t == 0)
            {
                if (x_min < x)
                {
                    x_min = x;
                }
            }
            cin >> t;
            if (t == 0)
            {
                if (y_max > y)
                {
                    y_max = y;
                }
            }
            cin >> t;
            if (t == 0)
            {
                if (x_max > x)
                {
                    x_max = x;
                }
            }
            cin >> t;
            if (t == 0)
            {
                if (y_min < y)
                {
                    y_min = y;
                }
            }
        }
        if (y_max >= y_min && x_max >= x_min)
        {
            cout << 1 << ' ' << x_min << ' ' << y_min << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}