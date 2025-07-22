#include<iostream>
using namespace std;

int Factorial(int N);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    int num;
    num = Factorial(N) / (Factorial(K) * Factorial(N-K));
    cout << num << "\n";
}

int Factorial(int N)
{
    int ans = 1;
    for (int i = N; i > 0; i--)
    {
        ans *= i;
    }
    return ans;
}