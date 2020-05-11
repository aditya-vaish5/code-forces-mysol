#include <iostream>
using namespace std;

int main()
{
    long int n,k,left,sum;
    cin >> n >> k;
    sum=0;
    for(long int i=1;i<=n;i++){
        sum+=i;
        left=n-i;
        if(k==sum-left){
            break;
        }
    }
    cout << left;
}