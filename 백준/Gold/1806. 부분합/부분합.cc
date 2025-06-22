#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, S;
    cin >> N >> S;
    vector<int> BasArr(N,0); //기본
    
    int start = 0;
    int end = 0;
    long long sum = 0;
    int minLen = N+1;

   
    for (int i = 0; i < N; ++i)
        cin >> BasArr[i];
    while (true)
    {
        if (sum >= S) 
        {
            minLen = min(minLen, end - start);
            sum -= BasArr[start++];
        }
        else if (end == N) 
        {
            break;
        }
        else 
        {
            sum += BasArr[end++];
        }
    }
    cout << (minLen == N + 1 ? 0 : minLen) << '\n';
    return 0;
}