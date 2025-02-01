#include<iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	for (int i = 1; i <= 9; i++) {
		cout << N << " * " << i << " = " << N * i << "\n";
	}
}