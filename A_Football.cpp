// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     vector<int> player;

//     for (char ch : s)
//     {
//         if (ch == '0')
//             player.push_back(0);
//         else
//             player.push_back(1);
//     }

//     int count = 1;

//     for (int i = 1; i < player.size(); i++)
//     {
//         if (player[i] == player[i - 1])
//         {
//               count++;
//             if (count >= 7)
//             {
//                  cout << "YES" << endl;
//                  return 0;
//             }
//         }

//         else
//              count = 1;
//     }

//     cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count >= 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
            count = 1;
    }

    cout << "NO" << endl;
    return 0;
}
