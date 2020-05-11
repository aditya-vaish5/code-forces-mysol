#include <iostream>
using namespace std;

#include <algorithm>
#include <string>
#include <vector>
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int count = 0;
    int x = 0;
    for (int i = 0; i < b.length(); i++)
    {
        if (a[i] != b[i])
        {
            x++;
        }
    }
    if (x % 2 == 0)
    {
        count++;
        // cout << x << endl;
    }
    for (int i = 0; i < a.length() - b.length(); i++)
    {
        if (a[i] != b[0])
        {
            x--;
        }
        if (a[i + b.length()] != b[b.length() - 1])
        {
            x++;
        }
        if (x % 2 == 0)
        {
            count++;
            // cout << x << endl;
        }
    }
    cout << count;
}
// std::string a, b;
// int s, k = 1, i;
// main()
// {
//     std::cin >> a >> b;
//     for (; b[i]; i++)
//         k ^= a[i] ^ b[i];
//     for (s = k; a[i]; i++)
//         s += k ^= a[i] ^ a[i - b.size()];
//     printf("%d", s);
// }
