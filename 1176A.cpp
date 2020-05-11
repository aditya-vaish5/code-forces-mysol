#include<iostream>
using namespace std;
int main()
{	
int n,k=0;
cin >> n;

long long int arr[n];
long long int a;

for(int i=0;i<n;i++)
    cin >> arr[i];
for(int i=0;i<n;i++){
    a=arr[i];
    k=0;
    while(a!=1)
    {
        if(a%2==0){
            a/=2;
            k++;
        } else if (a%3==0){
            a/=3;
            k+=2;
        } else if (a%5==0){
            a/=5;
            k+=3;
        } else{
            k=-1;
            break;
        }
    }
    cout << k;
    cout << endl;
}

}