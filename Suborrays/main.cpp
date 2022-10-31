#include <bits/stdc++.h>
 
using namespace std;
  
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t, n, i;
 
    cin >> t;
 
    while(t--)
    {
        cin >> n;
 
        for(i = 0; i < n; i++)
        {
            cout << i + 1 <<' ';
        }
        cout << '\n';
    }
 
    return 0;
}
