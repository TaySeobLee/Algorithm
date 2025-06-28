#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Arr[9];
    int Max = 0;
    int index = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> Arr[i];
        if(Arr[i] > Max)
        {
            Max = Arr[i];
            index = i + 1;
        } 
    }
    cout << Max <<"\n" <<index<<"\n";
}