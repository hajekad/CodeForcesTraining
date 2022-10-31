#include <bits/stdc++.h>
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int n, k, number, substractor;
    set<int> a;
 
    cin >> n >> k;
 
    while(n--)
    {
        cin >> number;
        a.emplace(number);
    }
 
    substractor = 0;
    while(k--)
    {
        if(a.empty())
        {
            cout << "0\n";
            continue;
        }
 
        auto tmp = a.begin();
 
        number = *tmp - substractor;
 
        cout << number << '\n';
 
        substractor += number;
 
        while(tmp != a.end() && *tmp - substractor < 1)
        {
            a.erase(tmp);
            tmp = a.begin();
        }
    }
 
    return 0;
}
