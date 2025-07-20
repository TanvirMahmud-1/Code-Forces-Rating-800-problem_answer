#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (l == -1)
                    l = i;
                r = i;
            }
        }
        if (l == -1)
            cout << 0 << endl;
        else
        {
            int cnt = 0;
            for (int i = l; i <= r; i++)
                if (s[i] == '0')
                    cnt++;
            cout << cnt << endl;
        }
    }
    return 0;
}