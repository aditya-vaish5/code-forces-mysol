#include <iostream>
using namespace std;
int main()
{
    long long a,n,m,p,q;
    cin>>n>>m>>a;

    p= n/a;
    q= m/a;

    if(n%a!=0) p++;
    if(m%a!=0) q++;

    cout<< p*q <<endl;
    return 0;
}