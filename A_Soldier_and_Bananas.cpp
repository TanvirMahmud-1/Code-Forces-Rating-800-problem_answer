#include <iostream>
using namespace std;

int main()
{
    int x, n, y;
    cin >> x >> n >> y;
    int cost = x * y * (y + 1) / 2;

    int need = cost - n;
    if (need < 0)
        need = 0;

        cout << need << endl;
    return 0;
}
