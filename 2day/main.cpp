#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("input.txt", "r", stdin);

	long long d = 0, l = 0, aim = 0;

	for(int i = 0; i < 1000; ++i)
	{
		string s;
		long long val;
		cin >> s >> val;

		/*
		if(s == "forward")
			l += val;
		else if(s == "up")
			d += val;
		else if(s == "down")
			d -= val;
		*/ // 1 part

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
}