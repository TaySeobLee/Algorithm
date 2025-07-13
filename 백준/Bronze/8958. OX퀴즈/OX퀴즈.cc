#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    string str;
    for(int i = 0; i < N; i++)
    {
        cin >> str;
        int total,count;
        total = count = 0;
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'O')
            {
                count++;
            }
            else
            {
                count = 0;
            }
            total += count;
        }
        cout << total <<"\n";
    }
}