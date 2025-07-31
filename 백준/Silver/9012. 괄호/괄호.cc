#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int TestData;
    cin >> TestData;
    int Arr[TestData];
    for(int i = 0; i < TestData; i++)
    {

        string str = "";
        cin >> str;
        stack<char> str_stack;
        bool isValid = true;

        for(int j = 0; j< str.length(); j++)
        {
            if(str[j] == '(')
            {
                str_stack.push('(');
            }
            else if(str[j] == ')')
            {
                if (!str_stack.empty() && str_stack.top() == '(')
                {
                    str_stack.pop();
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
        }
        if (!str_stack.empty()) isValid = false;

        if (isValid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}