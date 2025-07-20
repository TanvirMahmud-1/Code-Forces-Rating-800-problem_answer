// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    vector<int> v(4);
//    for(int i = 0; i < 4; i++) {
//        cin >> v[i];
//    }

//    sort(v.begin(), v.end()); // ছোট থেকে বড়

//    // সর্বশেষ মানটাই a+b+c, বাকিগুলো দিয়ে a, b, c বের করি
//    cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2];

//    return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v(4);
   for(int i = 0; i < 4; i++) {
       cin >> v[i];
   }

   sort(v.begin(), v.end());

   vector<int> A ;
   A.push_back(v[3] - v[0]);
   A.push_back(v[3] - v[1]);
   A.push_back(v[3] - v[2]);

   sort (A.begin(), A.end());

   for (int x : A) cout << x << " ";

   return 0;
}
