#include<iostream>
#include<algorithm>
using namespace std;

int str_sorting(string a, string b);

string word[20000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> word[i];
    }

    sort(word, word + N, str_sorting);

    for(int i = 0; i < N; i++)
    {
        if(word[i] == word[i-1])
        {
            continue;
        }
        cout << word[i] << '\n';
    }
}

int str_sorting(string a, string b)
{
    if(a.length() == b.length())
    {
        return a < b;
    }
    else
    {
        return a.length() < b.length();
    }
}