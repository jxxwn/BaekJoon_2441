#include<iostream>

using namespace std;

int main()
{
	int n;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ' ';
		}
		for (int k = n; k > count; k--)
		{
			cout << '*';
		}
		++count;
		cout << '\n';
	}
	return 0;

}