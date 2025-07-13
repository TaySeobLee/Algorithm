#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> S(8);

    for(int i = 0; i < 8; i++)
    {
        cin >> S[i];
    }
    if(S[0]==1 && S[1]==2&& S[2]==3&& S[3]==4&& S[4]==5&& S[5]==6&& S[6]==7&& S[7]==8)
    {
        cout << "ascending" <<"\n";
    }
    else if(S[0]==8 && S[1]==7&& S[2]==6&& S[3]==5&& S[4]==4&& S[5]==3&& S[6]==2&& S[7]==1)
    {
        cout << "descending" << "\n";
    }
    else
    {
        cout << "mixed" << "\n";
    }
}