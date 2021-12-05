#include <iostream>

using namespace std;

const int n = 2000;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int ans = 0, pr = 0;

	for(int i = 1; i < n; ++i)
	{
		int n;
		cin >> n;

		if(n > pr)
			++ans;
		
		pr = n;
	}

	cout << ans;

	return 0;
}