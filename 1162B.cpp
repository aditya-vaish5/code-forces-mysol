//the program logic is wrong
//henceforth do check tutorials
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    n++;
    m++;
    long int a[n][m];
    long int b[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if ((i != (n - 1)) && (j != (m - 1)))
            {
                cin >> a[i][j];
            }
            else
            {
                a[i][j] = 2000000000;
            }
        };

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i != (n - 1) && j != (m - 1))
            {
                cin >> b[i][j];
            }
            else
            {
                b[i][j] = 2000000000;
            }
        }

    n--;
    m--;
    bool c[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            c[i][j] = false;

    int flag = 1;
    long int temp = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < a[i + 1][j] && b[i][j] < b[i + 1][j])
            {
                //everything is okay
            }
            else
            {
                temp = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = temp;
                c[i][j] = true;
            }
            if (a[i][j] < a[i + 1][j] && b[i][j] < b[i + 1][j])
            {
                //everything is okay
            }
            else
            {
                flag = 0;
            }
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < a[i][j + 1] && b[i][j] < b[i][j + 1])
            {
                //everything is okay
            }
            else
            {
                if (c[i][j] == false)
                {
                    temp = a[i][j];
                    a[i][j] = b[i][j];
                    b[i][j] = temp;
                }
                else
                {
                    flag = 0;
                }
            }

            if (a[i][j] < a[i][j + 1] && b[i][j] < b[i][j + 1])
            {
                ///everything is okay
            }
            else
            {
                flag = 0;
            }
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << c[i][j];
        cout << endl;
    }
    if (flag == 0)
    {
        cout << "Impossible";
    }
    else
    {
        cout << "Possible";
    }
}