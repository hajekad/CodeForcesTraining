#include <bits/stdc++.h>
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    const double pi = 2 * acos(0.0);
    double ret, circleArea, waterVolume, d, r, h, v, e, realSpeed, rainSpeed;
 
    cin >> d >> h >> v >> e;
 
    r = d / 2;
    circleArea = pi * (r * r);
    waterVolume = circleArea * h;
    rainSpeed = circleArea * e;
    realSpeed = v - rainSpeed;
 
    if(realSpeed <= 0)
    {
        cout << "NO\n";
        return 0;
    }
 
    ret = waterVolume / realSpeed;
 
    cout << "YES\n" << ret << "\n";
 
    return 0;
}
