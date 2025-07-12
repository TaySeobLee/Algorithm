#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        int N = 0;
        cin >> N;
        sum = sum + N*N;
    }
    cout << sum % 10 << "\n";
}