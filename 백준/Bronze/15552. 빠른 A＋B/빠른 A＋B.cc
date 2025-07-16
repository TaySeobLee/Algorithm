#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int A, B;
        cin >> A >> B;

        cout << A + B << "\n";
    }
}