#include <bits/stdc++.h>
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t, n, tmp, sum, i;
    bool flag;
 
    cin >> t;
 
    while(t--)
    {
        cin >> n;
        sum = 0;
        flag = true;
 
        for(i = 0; i < n; i++)
        {
            cin >> tmp;
 
            if(flag && tmp == 1 && i < n - 1)
                sum++;
            else
                flag = false;
        }
 
        if(sum % 2)
            cout << "Second\n";
        else
            cout << "First\n";
    }
 
    return 0;
}
