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
        vector<int> count_letter(26,0);
        for(char c : s)
        {
            count_letter[c - 'A']++;
        }

        string result = "";

        result += string(count_letter['T' - 'A'], 'T');
        result += string(count_letter['F' - 'A'], 'F');
        result += string(count_letter['N' - 'A'], 'N');

        for(int i = 0; i < 26; i++)
        {
            if(i == 'T' - 'A' || i == 'F' - 'A' || i == 'N' - 'A') 
                continue;
            result += string(count_letter[i], char('A' + i));
        }
        cout << result << endl;
    }
}

