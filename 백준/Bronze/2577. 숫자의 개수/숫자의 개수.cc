#include<iostream>
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    vector<int> S(10);

    int result = A * B * C;
    string str_result = to_string(result);
    for(int i = 0; i < str_result.length(); i++)
    {
        S[str_result[i] - '0']++;
    }
    for(int i = 0; i<10; i++)
    {
        cout << S[i] <<"\n";
    }
}