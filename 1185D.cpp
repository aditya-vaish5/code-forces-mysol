#include <iostream>
#include <string>
#include <map>
#include <stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long int p=0;
    vector<pair <long int,int>> x;
    for (int i=0;i<n;i++){
        cin >> p;
        x.push_back( makepair(p,i));
    }

}