#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int temp;
    cin >> n >> k;
    int arr[k];
    for(int i=0;i<k;i++){
        arr[i]=0;
    }
    for(int i=0;i< n;i++){
        temp=0;
        cin >> temp;
        arr[temp-1]+=1;
    }
    int odd_count=0;
    for(int i=0;i<k;i++){
        if(arr[i]%2==1){
            odd_count++;
        }
    }
    int stu_left = (odd_count/2);
    int ans=n-stu_left;
    cout << ans;
}