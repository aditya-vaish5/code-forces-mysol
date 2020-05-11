#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int temp, last=0;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < last)
        {
            i++;
            break;
        }
        last = temp;
        // cout<< "cool";
    }
    int x;
    for (; i < n; i++)
    {
        cin >> x;
        if (temp < x)
        {
            break;
        }
        temp = x;
    }
    if (i == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}