//easy question taken lite
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    long int a,b,c,d;
    cin >> a >> b >> c >> d;
    return ((abs(a - b)) - d) + ((abs(c - b)) - d);
}