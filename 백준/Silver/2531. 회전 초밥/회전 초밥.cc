#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, d, k, c;
    cin >> N >> d >> k >> c;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> count(d + 1, 0); // 각 종류별 등장횟수
    int uniqueType = 0; // 현재 윈도우에 있는 서로 다른 초밥 종류 수

    // 초기 슬라이딩 윈도우 [0 ~ k-1] 세팅
    for (int i = 0; i < k; i++) {
        int sushi = A[i % N]; // N을 넘으면 회전해야 하므로 %N 처리
        if (count[sushi] == 0) uniqueType++;
        count[sushi]++;
    }

    int maxType = uniqueType;
    // 쿠폰 초밥 c가 현재 구간에 없다면 +1
    if (count[c] == 0) maxType++;

    // 슬라이딩 윈도우 이동: N개의 시작 위치를 기준으로
    for (int i = 1; i < N; i++) {
        // 나가는 초밥: i-1번째 초밥
        int outSushi = A[(i-1) % N];
        count[outSushi]--;
        if (count[outSushi] == 0) uniqueType--;

        // 들어오는 초밥: i+k-1번째 초밥
        int inSushi = A[(i + k - 1) % N];
        if (count[inSushi] == 0) uniqueType++;
        count[inSushi]++;

        int currentMax = uniqueType;
        if (count[c] == 0) currentMax++; // 쿠폰 초밥 포함 여부

        maxType = max(maxType, currentMax);
    }

    cout << maxType << "\n";
    return 0;
}
