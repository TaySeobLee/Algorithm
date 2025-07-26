#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin>> arr[i];
    }

    int card;
    int maxSet = 0;

    for(int i = 0; i < N-2 ; i++)
    {
        for(int j = i+1; j < N-1 ; j++)
        {
            for(int k = j+1; k < N; k++)
            {
                card = arr[i] + arr[j] + arr[k];
                if(card <= M && maxSet < card)
                {
                    maxSet = card;
                }
            }
        }
    }
    cout << maxSet << "\n";


}