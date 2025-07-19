#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> k;
        if (k == 1 || k % 2 == 1)
        {
           cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}