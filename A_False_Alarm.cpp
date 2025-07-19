#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[15];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool canPass = false;
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (i + x >= n)
                {
                    canPass = true;
                    break;
                }
                else
                {
                    bool blocked = false;
                    for (int j = i + x; j < n; j++)
                    {
                        if (a[j] == 1)
                        {
                            blocked = true;
                            break;
                        }
                    }
                    if (!blocked)
                    {
                        canPass = true;
                        break;
                    }
                    else
                    {
                        canPass = false;
                        break;
                    }
                }
            }
        }
 
        cout << (canPass ? "YES" : "NO") << endl;
    }
    return 0;
}