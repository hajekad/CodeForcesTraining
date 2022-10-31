#include <bits/stdc++.h>
 
using namespace std;
 
int ret;
unordered_set<int> toNull;
vector<int> a;
 
void nullPrev(int i)
{
    i--;
    if(toNull.find(a[i]) == toNull.end())
        ret++;
    
    toNull.emplace(a[i]);
    a[i] = 0;
 
    if(i - 1 > -1 && 0 < a[i - 1])
        nullPrev(i);
}
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t, n, i, tmp;
 
    cin >> t;
    
    while (t--)
    {
        a.clear();
        toNull.clear();
        ret = 0;
 
        cin >> n;
 
        i = 0;
        while(i < n)
        {
            cin >> tmp;
 
            if(toNull.find(tmp) != toNull.end())
                tmp = 0;
            
            if(i - 1 > -1 && tmp < a[i - 1])
                nullPrev(i);
 
            a.push_back(tmp);
            
            i++;
        }
 
        cout << ret << '\n';
    }
    
 
    return 0;
}
