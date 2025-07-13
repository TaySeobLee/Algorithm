#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> S(42);

    for(int i = 0; i < 10; i++)
    {
        int A = 0;
        cin >> A;
        S[(A%42)]++;
    }
    int count = 0;
    for(int i = 0; i < 42; i++)
    {
        if(S[i] != 0)
        {
            count++;
        }
    }
    cout << count << "\n";
}