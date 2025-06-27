#include<iostream>
using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    //슬라이딩 윈도우
    int A[N];


    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int currentSum = 0;
    //초기 슬라이딩 윈도우 크기 잡기
    for(int i = 0; i < K; i++)
    {
        currentSum += A[i];
    }
     int maxTemp = currentSum; // 초기 구간합으로 초기화
    //i랑 j로 포인터 잡기
    for(int i = K; i < N; i++)
    {
        int j = i-K; // 각 포인터의 거리는 K
        //새로운 수는 더하고 기존 수는 아웃
        currentSum = currentSum + A[i] - A[j];
        if(currentSum > maxTemp)
            maxTemp = currentSum;
    }
    cout << maxTemp << "\n";
}
