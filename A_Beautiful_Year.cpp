#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    year++;

    // Loop until we find a year with all unique digits...

    while (true)
    {
        vector<int> digits;
        int temp = year;
        for (int i = 0; i < 4; i++)
        {
            digits.push_back(temp % 10);
            temp = temp / 10;
        }
        int repeated = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (digits[i] == digits[j])
                {
                    repeated = 1;
                }
            }
        }
        if (repeated == 0)
        {
            cout << year << endl;
            break;
        }
        year++;
    }
    return 0;
}