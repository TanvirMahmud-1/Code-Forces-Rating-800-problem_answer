#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int small = 0, upper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            small++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }
    if (upper > small)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - ('a' - 'A'); // chuto theki boro jaibo
        }
    }

    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + ('a' - 'A'); // boro theki chuto jaibo
        }
    }

    cout << s << endl;
    return 0;
}