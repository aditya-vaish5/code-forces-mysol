#include <iostream>
using namespace std;
int main()
{
    int x=0,y=0,z=0;
    int pp=0,np=0,zp=0;
    cin>>x>>y>>z;
    if((x+z)>y)
        pp++;
    if((y+z)>x)
        np++;
    if((x+z)==y)
        zp++;
    if((y+z)==x)
        zp++;
    if(z ==0 && x==y)
        cout<<0;
    else if(np==0 && pp==1 && zp==0)
        cout<<'+';
    else if(np==1 && pp==0 && zp==0)
        cout<<'-';
    else
        cout<<'?';
}