#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

const int n = 1000;
const int numsize = 11;

int countBits(vector<int>& nums, int pos)
{
	int bit_count = 0;

	for(auto num : nums)
		if(num & (1<<pos))
			++bit_count;

	return bit_count;
}

int findNum(vector<int> nums, bool reverse)
{
	int num = 0;
	for(int i = numsize; i >= 0; --i)
	{
		if(nums.size() == 1)
			return nums[0];

		int bit_count = countBits(nums, i);

		if(bit_count >= nums.size()/2 + (nums.size() % 2 == 0 ? 0 : 1) && !reverse)
			num += (1<<i);
		else if(bit_count < nums.size()/2 + (nums.size() % 2 == 0 ? 0 : 1) && reverse)
			num += (1<<i);

		for(int j = 0; j < nums.size(); ++j)
			if(!(~(num^nums[j]) & (1<<i)))
			{
				nums.erase(nums.begin()+j);
				--j;
			}

	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	vector<int> nums(n, 0);

	for(int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		nums[i] = stoi(s, nullptr, 2);
	}

	cout << findNum(nums, false)*findNum(nums, true);

	return 0;
}