

#include <iostream>
using namespace std;
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
int main()
{
    double h, l;
    cin >> h >> l;
    printf("%.6f", (pow(l, 2) - pow(h, 2)) / (2 * h));
}
