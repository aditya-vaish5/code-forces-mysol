#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector<int> k;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        k.push_back(x);
    }
    int max = 0, min = 0, sum = 0;
    for (int j = 0; j < n - 1; j++)
    {
        sum += k[j];
        if (sum > max)
            max = sum;
        if (sum < min)
            min = sum;
    }
    min = abs(min);
    if (sum > n - 1 || max > n - 1 || min > n - 1)
    {
        cout << -1;
    }
    else
    {
        min++;
        for (int i = 0; i < n - 1; i++)
        {
            cout << min << ' ';
            min += k[i];
        }
        cout << min;
    }
}