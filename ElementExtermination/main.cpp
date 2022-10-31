#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t, n, i, tmp;
	vector<int> arr;
 
	cin >> t;
	while(t--)
	{
		arr.clear();
 
		cin >> n;
		i = n;
		while(i--)
		{
			cin >> tmp;
			arr.push_back(tmp);
		}
 
		if(arr[0] < arr[n-1])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 
	return 0;
}
