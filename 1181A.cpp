#include <iostream>
// #define fun 5   //Macros
#define forn(i,n) for(int i = 0; i < int(n); i++) 
using namespace std;
int main()
{
    long long int x,y,z,p,q,a,k,b,c;
    cin>>x>>y>>z;
    a=x+y;
    a=a/z;
    b=x/z;
    c=y/z;
    c=c+b;
    if(a==c){
        k=0;
    }
    else{
    p=x%z;
    q=y%z;
    p=z-p;
    q=z-q;
    if(p>q){
        k=q;
    }
    else k=p;
    }
    cout<<a<<' '<<k;
}