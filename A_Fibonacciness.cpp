#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int maxFib = 0;

        for (int a3 = -199; a3 <= 199; ++a3)
        {
            int fibCount = 0;

            if (a3 == a1 + a2)
                fibCount++;
            if (a4 == a2 + a3)
                fibCount++;
            if (a5 == a3 + a4)
                fibCount++;

            if (fibCount > maxFib)
                maxFib = fibCount;
        }

        cout << maxFib << endl;
    }

    return 0;
}
