#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N , X;
    cin >> N >> X;
    int Arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    for(int i = 0; i < N; i++)
    {
        if(Arr[i] < X)
        {
            cout << Arr[i] << " ";
        }
    }
}