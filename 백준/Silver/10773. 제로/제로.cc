#include<iostream>
#include<stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;
    stack<int> A;
    for(int i = 0; i < testCase; i++)
    {
        int num = 0;
        cin >> num;
        if(num == 0)
        {
            A.pop();
        }
        else
        {
            A.push(num);
        }
    }
    int total = 0;
    while(!A.empty())
    {
        total += A.top();
        A.pop();
    }
    cout << total << "\n";
}