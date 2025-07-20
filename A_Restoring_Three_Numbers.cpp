1st solve:


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    vector<int> v(4);
//    for(int i = 0; i < 4; i++)
//    {
//        cin >> v[i];
//    }

//    sort(v.begin(), v.end());

//    vector<int> A ;
//    A.push_back(v[3] - v[0]);
//    A.push_back(v[3] - v[1]);
//    A.push_back(v[3] - v[2]);

//    sort (A.begin(), A.end());

//    for (int x : A) cout << x << " ";

//    return 0;
// }

2nd Solve:


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> x(4);
    for (auto &v : x)
        cin >> v;

    sort(x.begin(), x.end());

    long long a = x[3] - x[2];
    long long b = x[3] - x[1];
    long long c = x[3] - x[0];

    cout << a << " " << b << " " << c << endl;

    return 0;
}
