#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Test;
    cin >> Test;
    int result;
    for(int i = 0; i < Test; i++)
    {
        int H, W, N;
        H = W = N = 0;
        cin >> H >> W >> N;
        if(N%H == 0)
        {
            result = H * 100 + (N / H);
        }
        else
        {
            result = (N%H) * 100 + (N / H) +1;
        }
        cout <<result <<"\n";
    }
}