#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n <= m && n <= k)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
