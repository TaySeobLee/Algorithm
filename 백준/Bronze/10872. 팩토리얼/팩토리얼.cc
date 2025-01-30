#include<iostream>
using namespace std;

int main()
{
	int N;
	long long num = 1;

	cin >> N;
	while (N)
	{
		num *= N;
		N--;
	}
	cout << num << endl;
	return 0;
}