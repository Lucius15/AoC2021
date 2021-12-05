#include <iostream>
#include <vector>

using namespace std;

const int n = 2000;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int ans = 0;

	vector<int> v(n, 0);
	for(int i = 0; i < n; ++i)
		cin >> v[i];

	for(int i = 3; i < n; ++i)
		if(v[i] > v[i-3])
			++ans;

	cout << ans;

	return 0;
}