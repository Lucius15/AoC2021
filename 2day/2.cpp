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

	long long d = 0, l = 0, aim = 0;

	for(int i = 0; i < n; ++i)
	{
		string s;
		long long val;
		cin >> s >> val;

		if(s == "forward")
		{
			l += val;
			d += aim*val;
		}
		else if(s == "up")
			aim -= val;
		else if(s == "down")
			aim += val;
	}

	cout << abs(d*l);

	return 0;
}