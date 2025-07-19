#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int a, b;
        cin >> a >> b;

        int mod = a % b;

        if (mod == 0)
            cout << 0 << endl;
        else
            cout << b - mod << endl;
    }

    return 0;
}
