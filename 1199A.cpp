#include <iostream>
using namespace std;
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n = 0, x, y;
    cin >> n >> x >> y;
    int temp = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        check = 1;
        for (int j = 0; j < x; j++)
        {
            if (i - j - 1 < 0)
            {
                continue;
            }
            if (a[i] > a[i - j - 1])
            {

                check = 0;
                continue;
            }
        }
        for (int j = 0; j < y && i + j + 1 < n; j++)
        {

            if (a[i] > a[i + j + 1])
            {
                check = 0;
                continue;
            }
        }
        if (check == 1)
        {
            break;
        }
    }
    cout << i + 1;
}