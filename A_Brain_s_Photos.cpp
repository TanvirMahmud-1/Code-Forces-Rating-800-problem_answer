#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char pixel;
    int color = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y')
                color = 1;
        }
    }
    cout << "#" << (color ? "Color" : "Black&White");
    return 0;
}
