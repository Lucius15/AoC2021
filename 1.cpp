#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int ans = 0, pr = 0;

	/*for(int i = 1; i < 2000; ++i)
	{
		int n;
		cin >> n;

		/*if(n > pr)
			++ans;
		
		pr = n;
	}*/ // 1 part

	vector<int> v(2000, 0);
	for(int i = 0; i < 2000; ++i)
		cin >> v[i];

	for(int i = 3; i < 2000; ++i)
		if(v[i] > v[i-3])
			++ans;

	cout << ans;

	return 0;
}