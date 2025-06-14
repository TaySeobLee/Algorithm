#include <iostream>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int total = 0;
    cin >> total;
    
    for(int i = 0; i <10; i++)
    {
        int X = 0;
        cin >> X;
        total -= X;
    }
    cout << total  <<"\n";
}