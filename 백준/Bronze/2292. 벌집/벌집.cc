#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int i = 1;
    while(N > 0)
    {
        if(N == 1)
        {
            break;
        }

        N -= i * 6;
        i++;
    }
    cout << i << "\n";
}