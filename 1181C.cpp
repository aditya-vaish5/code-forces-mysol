#include <iostream>
// #define fun 5   //Macros
#define forn(i,n) for(int(i) = 0; (i) < int(n); (i)++) 
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    char c;
    forn(i,n){
        forn(j,m){
            cin>>c;
            a[i][j]=(int)(c-'a');
        }
    }
    int num[3];
    int i,j,k,l,r,p,q,flag,o;
    int n1=n/3;
    int x=0;
    forn(i,n1){
        forn(j,m){
            //i and j are the size of flag to be searched
            forn(k,n-i-i-i-3+1){
                forn(l,m-j){
                    flag=1;
                    num[0]=a[k][l];
                    num[1]=a[k+i+1][l];
                    ,,kkkkkkkkkkkkkkkkkkkkkkkkkkkkk
                    num[2]=a[k+i+i+2][l]; 
                    // cout<<num[0]<<num[1]<<num[2]<<endl;
                    if(num[0]==num[1] || num[1]==num[2] || num[0]==num[2])
                        flag=0;
                    for(p=0;p<=2;p++){//3 different lines in the flag by p
                        int f=(i+1)*p;
                        for(q=0;q<=i;q++)//no of lines in one row of a flag by q
                        {
                            for(o=0;o<=j;o++){ //tiles in every row
                                if(a[k+f+q][l+o]!=num[p]){
                                    flag=0;
                                }
                            }
                        }
                    }
                if(flag==1){
                    // cout<<"true";
                    x++;
                }
                }
                
            }
        }
        
    }
    cout << x;
}