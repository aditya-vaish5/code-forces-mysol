#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    unsigned long long int a,b,c,x,y,z;
    int q=0;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a >> b >> c;
        if(a>b){
            x=a;
            a=b;
            b=x;
        }if(a>c){
            x=a;
            a=c;
            c=x;
        }if(b>c){
            x=b;
            b=c;
            c=x;
        }
        x=b-a;
        y=c-x;
        z=y/2;
        a=b+z;
        cout << a << endl;
    }
}