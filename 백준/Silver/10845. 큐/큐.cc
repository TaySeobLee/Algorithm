#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    queue<int> q1;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if(str == "push")
        {
            int num;
            cin >> num;
            q1.push(num);
        }
        else if(str == "pop")
        {
            if(q1.empty())
            {
                cout << -1 << "\n";           
            }
            else
            {
                cout << q1.front() << "\n";
                q1.pop();   
            }
        }
        else if(str == "size")
        {
            cout << q1.size() << "\n";
        }
        else if(str == "empty")
        {
            cout <<(q1.empty() ? 1 : 0) << "\n";
        }
        else if(str == "front")
        {
            if(q1.empty()) cout << -1 << "\n";
            else
            {
                cout << q1.front() << "\n";
            }
        }
        else if(str == "back")
        {
            if(q1.empty()) cout << -1 << "\n";
            else 
            {
                cout << q1.back() << "\n";            
            }
        }
    }

}