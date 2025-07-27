#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int duplicate_found = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                duplicate_found = 1;
                break;
            }
        }
        if (duplicate_found)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}