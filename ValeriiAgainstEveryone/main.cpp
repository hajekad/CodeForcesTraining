#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t, n, i, tmp;
	bool flag;
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
 
		flag = false;
		for(i = 0; i < n; i++)
		{
			if(count(arr.begin(), arr.end(), arr[i]) > 1)
			{
				flag = true;
				break;
			}
 
		}
 
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 
	return 0;
}
