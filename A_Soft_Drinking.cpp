#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F, B, ml_B, L, slices_L, S_gram, ml_T, salt_T;
    cin >> F >> B >> ml_B >> L >> slices_L >> S_gram >> ml_T >> salt_T;

    int total_drink = B * ml_B;
    int total_slices = L * slices_L;
    int drink_toasts = total_drink / ml_T;
    int lime_toasts = total_slices;
    int salt_toasts = S_gram / salt_T;

    int total_toasts = min({drink_toasts, lime_toasts, salt_toasts});
    cout << total_toasts / F << endl;
}
