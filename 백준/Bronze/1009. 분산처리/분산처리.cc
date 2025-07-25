#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int TestCase;
    cin >> TestCase;

    for(int i = 0; i < TestCase; i++)
    {
        int A = 0, B = 0;
        cin >> A >> B;
         A %= 10;

        if(A == 0)
            cout << 10 << "\n";
        else {
            int result = 1;
            for(int i = 0; i < (B % 4 == 0 ? 4 : B % 4); i++)
                result = (result * A) % 10;
            cout << result << "\n";
        }
    }
}