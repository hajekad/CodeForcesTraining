#include <bits/stdc++.h>
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int n, m, tmp, i, j;
    unsigned long long int ret;
    vector<int> a;
 
    cin >> n >> m;

    if(n > m)
    {
        cout << 0 << '\n';
        return 0;
    }
 
    i = n;
    while(i--)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
 
    i = 0;
    ret = 1;
 
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            ret *= abs(a[i] - a[j]);
            ret %= m;
        }
        if(!ret)
            break;
    }
    
    cout << ret << '\n';
 
    return 0;
}
