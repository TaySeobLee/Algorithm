#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;
    vector<int> A(N+1, 0);  // 0: 소수, 1: 합성수 표시
    A[0] = A[1] = 1; // 0, 1은 소수가 아님

    for (int i = 2; i * i <= N; i++) {
        if (A[i] == 0) { // i가 소수이면
            for (int j = i * i; j <= N; j += i) {
                A[j] = 1; // 배수는 합성수 표시
            }
        }
    }
    for(int i = M; i < N+1; i++)
    {
        if (A[i] == 0) { // 소수일 때 출력
            cout << i << "\n";
        }
    }

}