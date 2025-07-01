#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> A(6); //사이즈 배열
    int T, P;
    int count = 0;
    cin >> N;
    for(int i = 0; i < 6; i++)
    {
        cin >> A[i];
    }
    cin >> T >> P;
    for(int i = 0; i < 6; i++)
    {
        count += (A[i] / T + (A[i] % T > 0));
    }
    cout << count << "\n";
    cout << N / P <<" "<< N % P << "\n";

}