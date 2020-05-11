#include <iostream>
using namespace std;
int main()
{
    int al,bl,l=0;
    int a1,b1,pk=0;
    unsigned long long int temp,x=1,a,b,anow,bnow;
    cin>>al>>bl>>a>>b;
    if(bl<al)
    {
        temp=a;
        a=b;
        b=temp;
        temp=al;
        al=bl;
        bl=temp;
    }
    for (int i=0;i<bl;i++){
        bnow=b/x;
        anow=a;
        pk=1;
        while(anow!=0 && bnow!=0){
            a1=anow%10;
            b1=bnow%10;
            // cout<<anow<<bnow;
            if(a1>0 && b1>0){
                // cout << l;
                l=l+pk;
            }
            anow/=10;
            bnow/=10;
            pk*=2;
        }
        x=x*10;
    }
    cout << l;
}