#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    stack<int> st;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if(str == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        if(str == "pop")
        {
            if(st.empty()) 
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        if(str == "size")
        {
            cout << st.size() << "\n";
        }
        if(str == "empty")
        {
            cout << (st.empty() ? 1 : 0) << "\n";
        }
        if(str == "top")
        {
            if(st.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.top() << "\n";
            }
        }

    }
}