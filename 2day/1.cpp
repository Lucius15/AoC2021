#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int n = 1000;

int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("input.txt", "r", stdin);

	long long d = 0, l = 0;

	for(int i = 0; i < n; ++i)
	{
		string s;
		long long val;
		cin >> s >> val;

		if(s == "forward")
			l += val;
		else if(s == "up")
			d += val;
		else if(s == "down")
			d -= val;
	}

	cout << abs(d*l);

	return 0;
}