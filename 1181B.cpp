//incompletre
#include <iostream>
#include <string>
// #define fun 5   //Macros
#define forn(i,n) for(int i = 0; i < int(n); i++) 
using namespace std;
int main()
{
    string s="";
    int n,pos;
    cin >> n;
    cin >> s;
    int p,q;
    string str1,str2;
    int k=n/2;
    int t=0;
    int t1=0,t2=0;
    while(true){
    if(n%2!=0){
        p=k-t;
        q=k+t+1;
        if(s[p]!='0')
            t1=1;
        if(s[q]!='0')
            t2=1;
        if(t1==0 && t2==0 ){
            continue;
        }
        if(t1==0 && t2==1){
            str1=s.substring(0)
        }
    }
    }
}