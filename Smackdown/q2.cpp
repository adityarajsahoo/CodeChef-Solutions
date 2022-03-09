// TESTSERIES
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int india = 0;
        int england = 0;
        int d = 0;

        vector<int> v;
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                india = india + 1;
            }
            else if (v[i] == 2)
            {
                england = england + 1;
            }
            else
            {
                d = d + 1;
            }
        }
        if (india > england)
        {
            cout << "INDIA" << endl;
        }
        else if (england > india)
        {
            cout << "ENGLAND" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
}