#include <bits/stdc++.h>
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t, n, tmp, ret, maxN, maxLR, minN, minLR, i;
    vector<int> vec;
 
    maxN = 0;
    minN = INT32_MAX;
    cin >> t;
 
    while(t--)
    {
        vec.clear();
 
        cin >> n;
 
        i = n;
        while(i--)
        {
            cin >> tmp;
            vec.push_back(tmp);
        }
 
        sort(vec.begin(), vec.end());
 
        maxN = vec[n - 1];
        maxLR = vec[n - 2];
        minN = vec[0];
        minLR = vec[1];
        
        ret = maxN - minN + maxLR - minLR;
 
        cout << ret << '\n';
    }
 
    return 0;
}
