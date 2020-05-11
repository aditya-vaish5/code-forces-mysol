#include <iostream>
using namespace std;
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
int main()
{
    int n = 0, k = 0;
    cin >> n;
    int left = 0;
    vector<int> a;
    int odd_check=0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if(k%2!=0) odd_check++;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    int large=a[n-1];
    int c=n-2;
    while(large>0 && c>=0){
        large-= a[c--];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     k = a[n - i - 1];
    //     left -= k;
    //     left = abs(left);
    // }
    if (large <= 0 && odd_check%2==0)
        cout << "YES";
    else
        cout << "NO";
}