#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int Anton = 0, Danik = 0;
    for (char C : s)
    {
        if (C == 'A')
            Anton++;
        else
            Danik++;
    }
    if (  Anton >= Danik)
        cout << "Anton" << endl;
    else if (Danik >= Anton)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}