#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m][5]={0};
    char temp;
    int t;
    string p = "";
    scanf("\n");
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        for (int j = 0; j < m; j++)
        {
            temp = p[j];
            t = temp - 65;
            // cout<< t<< endl;
            arr[j][t]++;
        }
    }
    int ans = 0;

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }

    //     // Newline for new row
    //     cout << endl;
    // }
    for (int j = 0; j < m; j++)
    {
        cin >> t;
        int max = 0;
        for (int i = 0; i < 5; i++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }
        // cout << max << endl;
        ans += t * max;
    }
    cout << ans;
}