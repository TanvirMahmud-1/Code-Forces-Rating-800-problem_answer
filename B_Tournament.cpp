#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int b = v[j - 1];
        if (k > 1)
            cout << "YES" << endl;
        else
        {

            sort(v.begin(), v.end());

            if (b == v[n - 1])
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
    }

    return 0;
}