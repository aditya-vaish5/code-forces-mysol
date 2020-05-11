
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        int flag = 1;
        int anum=0,bnum=0;
        int k=0;
        for (int j = 0; j < a.length(); j++)
        {
            anum = 0;
            bnum = 0;
            c = a[j];
            while (a[j] == c)
            {
                j++;
                anum++;
            }
            j--;
            while (b[k] == c)
            {
                k++;
                bnum++;
            }
            if (anum > bnum)
            {
                flag = 0;
                break;
            }
        }
        if (flag && k==b.length())
        {
            cout << "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
}