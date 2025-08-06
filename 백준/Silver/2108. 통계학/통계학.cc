#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);
    int sum = 0;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    sort(A.begin(), A.end());

    // 산술평균
    cout << (int)round((double)sum / N) << "\n";

    // 중앙값
    cout << A[N / 2] << "\n";

    // 최빈값
    int freq[8001] = {0};  // -4000 ~ 4000

    for(int i = 0; i < N; i++) {
        freq[A[i] + 4000]++;
    }

    int max_freq = 0;
    vector<int> modes;

    for(int i = 0; i <= 8000; i++) {
        if(freq[i] > max_freq) {
            max_freq = freq[i];
            modes.clear();
            modes.push_back(i - 4000);
        }
        else if(freq[i] == max_freq) {
            modes.push_back(i - 4000);
        }
    }

    if(modes.size() == 1) cout << modes[0] << "\n";
    else cout << modes[1] << "\n";

    // 범위
    cout << A[N - 1] - A[0] << "\n";

    return 0;
}
