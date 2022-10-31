#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace __gnu_pbds;
using namespace std;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update> 
    ordered_set;
 
signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	ordered_set colSet, rowSet;
	int n, q, t, x, y, x2, y2;
	int *rows, *columns;
 
	cin >> n >> q;
 
	rows = (int *) calloc (n + 1, sizeof(int));
	columns = (int *) calloc (n + 1, sizeof(int));
 
 
	while(q--)
	{
		cin >> t >> x >> y;
 
		switch (t)
		{
		case 1:
			rows[x]++;
			columns[y]++;
			
			rowSet.insert(x);
			colSet.insert(y);			
			
			break;
		
		case 2:
			rows[x]--;
			columns[y]--;
 
			if(!rows[x])
				rowSet.erase(x);
			
			if(!columns[y])
				colSet.erase(y);
 
			break;
			
		case 3:
			cin >> x2 >> y2;
 
			if(rowSet.order_of_key(x2 + 1) - rowSet.order_of_key(x) == x2 - x + 1
			|| colSet.order_of_key(y2 + 1) - colSet.order_of_key(y) == y2 - y + 1)
				cout << "Yes\n";
			else
				cout << "No\n";
 
			break;
 
		default:
			break;
		}
	}
	
	free(rows);
	free(columns);
	
	return 0;
}
