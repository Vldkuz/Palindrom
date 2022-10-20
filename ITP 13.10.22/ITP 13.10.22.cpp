#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = n;
	auto counter_r=0;
	while (n > 0)
	{
		counter_r += 1;
		n /= 10;
	}

	int i = 1;
	while (k>0)
	{
		int t = k / pow(10, counter_r - 1);
		int m = k % int(pow(10, 1));

		if (t != m)
		{
			cout << "N\n";
			return 0;
		}

		k = k % int(pow(10, counter_r - 1));
		k = k / 10;
		counter_r -= 2;
	}

	cout << "Y\n" << endl;
	return 0;
}