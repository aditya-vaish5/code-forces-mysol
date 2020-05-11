#include <iostream>
// #define fun 5   //Macros
#define forn(i,n) for(int (i) = 0; (i) < int(n); (i)++) 
using namespace std;
int main()
{
    // long long int x;
    int n,i;
    cin>>n;
    if(n%2!=0)
        n=0;
    else {
        int k=1;
        for(i=0;i<n;i+=2){
            k*=2;
        }
        n=k;
    }
    cout<<n;
}