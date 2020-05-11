#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int n, k, q = 0, odd_count = 0, left;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        odd_count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
                odd_count++;
        }
        if (odd_count < k)
        {
            printf("NO\n");
            continue;
        }
        left = k - odd_count;
        if (left % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        if (k == 1)
        {
            printf("%d\n", n);
            continue;
        }
        int j = 1;
        for (int i = 0; j < k; i++)
        {

            if (a[i] % 2 != 0)
            {
                j++;
                printf("%d ", i + 1);
            }
        }
        printf("%d\n", n);
    }
}