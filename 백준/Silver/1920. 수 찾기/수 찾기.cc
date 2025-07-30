#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int A[100000];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A+N);

    int M;
    cin >> M;
    int num;
    for(int i = 0; i < M; i++)
    {
        cin >> num;
        if(binary_search(A,A+N,num))
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}