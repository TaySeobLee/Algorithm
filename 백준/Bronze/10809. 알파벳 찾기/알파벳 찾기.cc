#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char str[101];
    cin >> str;
    vector<int> S(26,-1);
    for (int i = 0; str[i] != '\0'; i++)
    {
        int idx = str[i] - 'a'; // 'a' ~ 'z' → 0 ~ 25
        if (S[idx] == -1) // 처음 등장한 경우만 기록
            S[idx] = i;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << S[i] << " ";
    }
}