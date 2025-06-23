#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(true)
    {
        int x, y, z;
		int temp = 0;
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			return 0;

		if (x > y) {
			temp = y;
			y = x;
			x = temp;
		}
		if (y > z) {
			temp = z;
			z = y;
			y = temp;
		}

		if (z*z == x * x + y * y)
			cout << "right\n";
		else
			cout << "wrong\n";
    }

}