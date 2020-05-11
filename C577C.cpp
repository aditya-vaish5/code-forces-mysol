#include <iostream>
using namespace std;
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int x = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        x = n / 2;
        int l = n / 2;
        int p=count(a.begin() +n/2,a.end(),a[x]);
        // while (a[x] == a[x + 1])
        // {
        //     x++;
        //     if (x == n - 1)
        //     {
        //         break;
        //     }
        // }
        a[x+p-1]++;
        // for(int j=0;j<5;j++){
        //     cout << a[j] << " " ;
        // }
        // cout << endl;
    }
    cout << a[n / 2];
}