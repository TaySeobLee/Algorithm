#include<iostream>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    queue<int> q1;
    for(int i = 0; i< N; i++)
    {
        q1.push(i+1);
    }
    int num;
    cout << "<";
    while(!q1.empty())
    {
        for (int i = 1; i < K; i++) {
            int front = q1.front();
            q1.pop();
            q1.push(front);
        }
        int removed = q1.front();
        q1.pop();
        cout << removed;
        if (!q1.empty()) cout << ", ";
    }
    cout << ">";
}