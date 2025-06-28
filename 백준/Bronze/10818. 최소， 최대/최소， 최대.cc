#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int Max = -1000000;
    int Min = 1000000;

    for(int i = 0; i < N; i++)
    {
        int Num = 0;
        cin >> Num;
        if(Num < Min) Min = Num;
        if(Num > Max) Max = Num;
    }
    cout << Min << " " << Max << "\n";
    return 0;

}