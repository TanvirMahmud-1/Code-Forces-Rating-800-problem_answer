#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
         swap(a[0],b[0]);
         cout<<a<<" "<<b<<endl;
    }
   return 0;
}