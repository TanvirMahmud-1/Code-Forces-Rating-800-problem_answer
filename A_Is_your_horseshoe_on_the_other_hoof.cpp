// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(4);
//     for (int i = 0; i < 4; i++)
//     {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     v.erase(unique(v.begin(), v.end()), v.end());

//     cout << 4 - v.size() << endl;

//     return 0;
// }










#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(4);
    for (int i = 0; i < 4; i++)
        cin >> v1[i];

    sort(v1.begin(), v1.end());

    vector<int> v2;
    v2.push_back(v1[0]);

    for (int i = 1; i < 4; i++)
    {
        if (v1[i] != v1[i - 1])
        {
            v2.push_back(v1[i]);
        }
    }

    cout << 4 - v2.size() << endl;

    return 0;
}
