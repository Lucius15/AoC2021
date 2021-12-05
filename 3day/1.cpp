#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int n = 1000;
const int numsize = 11;

void countBits(string& num, vector<int>& bits)
{
	for(int i = 0; i <= numsize; ++i)
		if(num[i] == '1')
			++bits[numsize-i];
}

int makeInt(vector<int>& bits, bool reverse)
{
	int num = 0;
	for(int i = 0; i <= numsize; ++i)
		if(n - bits[i] >= n/2 && !reverse)
			num += (1<<i);
		else if(n - bits[i] < n/2 && reverse)
			num += (1<<i);

	return num;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	vector<int> bits(numsize+1, 0);

	for(int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		
		countBits(s, bits);
	}	

	cout << makeInt(bits, false)*makeInt(bits, true);

	return 0;
}