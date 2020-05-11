#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    const string t = "RGB";
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int ans = 1e9;
        for (int offset = 0; offset < 3; ++offset)
        {
            vector<int> res(n);

            int cur = 0;

            for (int j = 0; j < n; j++)
            {
                res[j] = (s[j] != t[(j + offset) % 3]);
                cur += res[j];
                if (j >= k)// removing the backside count from the array res[j] thus consicutive check for n-k values without givivng a shit.
                {
                    cur -= res[j - k];
                }
                if (j >= k - 1)
                {
                    ans = min(ans, cur);
                }
            }
        }
        cout << ans << endl;
    }
}