#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A,B,V;
    cin >> A >> B >> V;
    int count = 1;
    count += (V-A) / (A-B);
    if((V-A)%(A-B) != 0)
        count++;
    if(A >= V)
        cout << "1";
    else
        cout << count;
}