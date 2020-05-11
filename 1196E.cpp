#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    int l, k, q = 0, b, count, w, temp, w_count = 0, b_count = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        w_count = 0;
        b_count = 0;
        count = 0;
        cin >> b >> w;
        if (w > b)
        {
            temp = b;
            b = w;
            w = temp;
            count = 1;
        }
        if (b > (4 + ((w - 1) * 3)))
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

        k = 1;
        while (w_count < w)
        {
            w_count++;
            cout << 2 + count << " " << k++ * 2 << endl;
        }
        k = 1;
        w_count = 0;
        while (w_count < w)
        {
            w_count++;
            l = k++ * 2 - 1;
            cout << 2 + count << " " << l << endl;
        }
        b -= w;
        k = 1;
        w_count = 0;
        while (b_count < b && w_count < w)
        {

            b_count++;
            w_count++;
            cout << 1 + count << " " << k++ * 2 << endl;
        }
        b -= w;
        k = 1;
        w_count = 0;
        b_count = 0;
        while (b_count < b && w_count < w)
        {

            b_count++;
            w_count++;
            cout << 3 + count << " " << k++ * 2 << endl;
        }
        if (b_count < b)
        {
            cout << 2 + count << " " << w * 2 + 1 << endl;
        }
    }
}