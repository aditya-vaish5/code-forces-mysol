#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<char> q;
    vector<char> p;
    vector<bool> qt;
    vector<bool> pt;

    for (int i = 0; i < n; i++)
    {
        char k;
        cin >> k;
        p.push_back(k);
        pt.push_back(false);
    }
    for (int i = 0; i < n; i++)
    {
        char k;
        cin >> k;
        q.push_back(k);
        qt.push_back(false);
    }
    int count = 0; //counts the number of

    vector<pair<int, int> > vect;

    for (int i = 0; i < n; i++)
    {
        char k = p[i];
        if (k == '?')
            continue;
        for (int j = 0; j < n; j++)
        {
            if (k == q[j] && pt[i] == false && qt[j] == false)
            {
                vect.push_back(make_pair(i, j));
                count++;
                pt[i] = true;
                qt[j] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char k = p[i];
        for (int j = 0; j < n; j++)
        {
            char l = q[j];
            if (l == '?')
                continue;
            if (k == '?' && l != '?' && pt[i] == false && qt[j] == false)
            {
                count++;
                vect.push_back(make_pair(i, j));
                qt[j] = true;
                pt[i] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char k = q[i];
        for (int j = 0; j < n; j++)
        {
            char l = p[j];
            if (l == '?')
                continue;
            if (k == '?' && l != '?' && qt[i] == false && pt[j] == false)
            {
                count++;
                vect.push_back(make_pair(j, i));
                pt[j] = true;
                qt[i] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {

        char k = q[i];
        if (k != '?')
            continue;
        for (int j = 0; j < n; j++)
        {
            char l = p[j];
            if (k == '?' && l == '?' && qt[i] == false && pt[j] == false)
            {
                count++;
                vect.push_back(make_pair(j, i));
                pt[j] = true;
                qt[i] = true;
                break;
            }
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << (vect[i].first + 1) << " " << (vect[i].second + 1) << endl;
    }
}