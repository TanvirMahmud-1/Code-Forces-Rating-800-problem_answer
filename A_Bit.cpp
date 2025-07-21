// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x = 0;
//     char statement[5];
 
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", &statement);
//         if (statement[0] == '+' || statement[1] == '+')
//         {
//             x++;
//         }
//         else
//         {
//             x--;
//         }
//     }
//     printf("%d\n", x);
//     return 0;
// }    

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string S;

    for (int i = 0; i < n; i++)
    {
        cin >> S;
        if (S[0] == '+' || S[1] == '+')
            x++;
        else
            x--;
    }

    cout << x << endl;
    return 0;
}
