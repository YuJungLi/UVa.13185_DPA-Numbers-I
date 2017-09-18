#include <iostream>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int num, sum = 0;
		cin >> num;
		for (int i = 1; i < num; i++)
		{
			if (num%i == 0)
				sum += i;
		}
		if (sum > num)
			cout << "abundant" << endl;
		else if (sum == num)
			cout << "perfect" << endl;
		else
			cout << "deficient" << endl;
	}
	return 0;
}