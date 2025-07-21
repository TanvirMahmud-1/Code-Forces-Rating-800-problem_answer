#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        if (n >= 2 && s[n - 2] == 'u' && s[n - 1] == 's')
        {
            s[n - 2] = 'i';
            s.erase(n - 1, 1);
        }

        cout << s << endl;
    }

    return 0;
}
